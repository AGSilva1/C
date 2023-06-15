#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main() {
int nBlancos=0, nDigitos=0, nLetras=0, nNulineas=0, nOtros=0, c = 0;
FILE *fichero;
char letras[100];

if(!(fichero = fopen("IntProg_U4.txt", "rt"))){
	
}


while(fgets(letras,100,fichero)){
	for(int i = 0; i< strlen(letras);i++){
		printf("%c\n",letras[i]);	
		switch(letras[i]){
			case '\n':
				nNulineas ++;
			break;
			case ' ':
				nBlancos ++;
			break;
			default:
			 if(isdigit(letras[i])){
				nDigitos ++;
			 }else if(isalpha(letras[i])){
			 	nLetras ++;
			 }else{
			 nOtros ++;
			}
		}
		
	}
	//printf("%s",letras);
	
}



printf("%10s%10s%10s%10s%10s%10s\n\n","blancos", "digitos", "letras", "lineas", "otros", "total");
printf("%10d%10d%10d%10d%10d%10d\n\n", nBlancos, nDigitos, nLetras, nNulineas, nOtros,nBlancos+nDigitos+nLetras+nNulineas+nOtros);
}
