#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
int main() {
int nBlancos=0, nDigitos=0, nLetras=0, nNulineas=0, nOtros=0, c = 0;
FILE *fichero;
char letras[100];
char Vfichero[100];
setlocale(LC_CTYPE, "Spanish");

if(!(fichero = fopen("IntProg_U4.txt", "rt"))){
	
}


while(fgets(letras,100,fichero)){
	
	printf("Frase: %s\n",letras);
	for(int i = 0; i< strlen(letras);i++){
		switch(letras[i]){
			case '\n':
				nNulineas ++;
				printf("Caracter: Salto \n");	
			break;
			case ' ':
				nBlancos ++;
				printf("Caracter: Blanco\n");	
			break;
			case '\r':
				printf("Caracter: UltimaLinea");
			default:
			 if(isdigit(letras[i])){
				nDigitos ++;
				printf("Caracter: %c\n",letras[i]);	
			 }else if(isalpha(letras[i])){
			 	nLetras ++;
			 	printf("Caracter: %c\n",letras[i]);	
			 }else{
				 nOtros ++;
				 printf("Caracter: %c\n",letras[i]);	
			}
		}
		
	}
	
}



printf("%10s%10s%10s%10s%10s%10s\n\n","blancos", "digitos", "letras", "lineas", "otros", "total");
printf("%10d%10d%10d%10d%10d%10d\n\n", nBlancos, nDigitos, nLetras, nNulineas, nOtros,nBlancos+nDigitos+nLetras+nNulineas+nOtros);
}
