#include <stdlib.h>
#include <stdio.h>

//prototipos de funciones

int maximoArbol(int var1, int var2, int var3);
int medioArbol(int var1, int var2, int var3);
int minimoArbol(int var1, int var2, int var3);

int maximoSupuesto(int var1, int var2, int var3);
int medioSupuesto(int var1, int var2, int var3);
int minimoSupuesto(int var1, int var2, int var3);



//desarrollo de funciones

int maximoArbol(int var1, int var2, int var3){
	if(var1 > var2){
		if(var1 > var3){
			return var1;
		}else if(var2 > var3){
			return var2;
		}else {
			return var3;
		}
	}else if(var2 > var3){
		return var2;
	}else {
		return var3;
	}
}
	
int medioArbol(int var1, int var2, int var3){
	if(var1 > var2){
		if(var1 < var3){
			return var1;
		}else if(var2 > var3){
			return var2;
		}else {
			return var3;
		}	
	}else if(var2 < var3){
		return var2;
	}else if(var1 < var3){
		return var3;
	}else {
		return var1;
	}	
	
}

	
int minimoArbol(int var1, int var2, int var3){
	if(var1 < var2){
		if(var1 < var3){
			return var1;
		}else if (var2 > var3){
			return var3;
		}else {
			return var1;
		}
	}else if(var2 < var3){
		return var2;
	}else {
		return var3;
	}
		
}
	

int maximoSupuesto(int var1, int var2, int var3){
	int vectorVariables[3] = {var1, var2, var3};
	int supuestoMayor = 0;
	int i;
	for(i = 0; i<3; i++){
		if (vectorVariables[i] > supuestoMayor){
			supuestoMayor = vectorVariables[i];
		}
	}
	return supuestoMayor;	
}

int medioSupuesto(int var1, int var2, int var3){
	int supuestoMedio[3] = {var1, var2, var3}; 
	int i;
	for(i = 0; i<3; i++){
		if(supuestoMedio[i] > minimoSupuesto(var1, var2, var3) && supuestoMedio[i] < maximoSupuesto(var1, var2, var3)){
			return supuestoMedio[i];
		}	
	}	
}

int minimoSupuesto(int var1, int var2, int var3){
	int vectorVariables[3] = {var1, var2, var3};
	int supuestoMenor = 99999;
	int i;
	for(i = 0; i<3; i++){
		if (vectorVariables[i] < supuestoMenor){
			supuestoMenor = vectorVariables[i];
		}
	}
	return supuestoMenor;	
	
}

