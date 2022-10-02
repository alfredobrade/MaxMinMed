#include "ADT-Search.h"
//#include <stdio.h>
//#include <stdlib.h>
#include <ctype.h>

//prototipo de funciones
void menuOpciones();
void menuBusqueda();

//variables globales

int A = 0, B = 0, C = 0;
char opcionMenu = 'z';


//bloque principal

int main(){
	menuOpciones();
	
	
	return 0;
}


void menuOpciones(){
	
	printf("\t***MENU DE OPCIONES***\n\n");
	
	printf("1-Ingresar numeros\n2-Metodos de Busqueda\nX-Salir\n");

while(opcionMenu !='x'){
		scanf("%c", &opcionMenu);
		switch(tolower(opcionMenu)){
			case '1':{
				printf("\nIngrese numero de la variable A: ");
				scanf("%d", &A);
				
				printf("\nIngrese numero de la variable B: ");
				scanf("%d", &B);
				
				printf("\nIngrese numero de la variable C: ");
				scanf("%d", &C);
				
				system("cls");
				menuOpciones();
				break;
			}
			case '2':{
				menuBusqueda();
				system("cls");
				break;
			}
			case 'x':{
			
				break;
			}
		}
	}
}

void menuBusqueda(){
	system("cls");
	printf("\t***MENU DE BUSQUEDA***\n");
	printf("\nA-Arbol\nB-Supuesto\nC-Campeonato\n");
	fflush(stdin);
	scanf("%c", &opcionMenu);
	switch(tolower(opcionMenu)){
			case 'a':{
				printf("El maximo es:\t%d\nEl medio es:\t%d\nEl minimo es:\t%d\n", maximoArbol(A,B,C), medioArbol(A,B,C), minimoArbol(A,B,C));
				system("PAUSE");
				system("cls");
				menuOpciones();
				break;
			}
			case 'b':{
				printf("El maximo es:\t%d\nEl medio es:\t%d\nEl minimo es:\t%d\n", maximoSupuesto(A,B,C),medioSupuesto(A,B,C), minimoSupuesto(A,B,C));
				system("PAUSE");
				system("cls");
				menuOpciones();
				break;
			}
			case 'c':{
				printf("El maximo es:\t%d\nEl medio es:\t%d\nEl minimo es:\t%d\n", maximoCampeonato(A,B,C),medioCampeonato(A,B,C), minimoCampeonato(A,B,C));
				system("PAUSE");
				system("cls");
				menuOpciones();
				break;
			}
	}
}