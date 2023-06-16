#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
int main() {
//se inicializan los contadores de los ipos de caracteres
int nBlancos=0, nDigitos=0, nLetras=0, nNulineas=0, nOtros=0;
//Se inicializa la variable de tipo archivo para abrir y lerr el archivo
FILE *fichero;
//Se inicializa varibla de largo 100 para recorrer los caracteres del txt
char letras[100];

//Se abre el archivo enmodo lectura
fichero = fopen("IntProg_U4.txt", "r");
	
//Mientras exista linea ejecuta expresion interna
while(fgets(letras,100,fichero)){
	//por cada linea se suma al contador de lineas
	nNulineas ++;
	//printf("Frase: %s\n",letras);
	//Recorre la linea caracter por caracter
	for(int i = 0; i< strlen(letras);i++){
		//segun el tipo de caracter sumar
		switch(letras[i]){
			//Si es salto de linea, no hacer nada ya que lo sumamos al inicio del while y no queremos que lo considere el default
			case '\n':
				
				break;
			//Se es espacio en blanco sumar en su contador
			case ' ':
				nBlancos ++;
				//printf("Caracter: Blanco\n");	
				break;
			//Encaso de no ser ninguno de los otros dos casos
			default:
			//Valida si el caracter es un numero, suma a su contador
			 if(isdigit(letras[i])){
				nDigitos ++;
				//printf("Caracter: %c\n",letras[i]);	
			//En caso contrario valida si es una letra  suma a su contador
			 }else if(isalpha(letras[i])){
			 	nLetras ++;
			 	//printf("Caracter: %c\n",letras[i]);	
			//En caso de no ser letra o numero se suma a contador de otros caracteres
			 }else{
				 nOtros ++;
				 printf("Caracter: %c\n",letras[i]);	
			}
		}
		
	}
	
}


//Imprimer los titulos de cada contador y el total de todos
printf("%10s%10s%10s%10s%10s%10s\n\n","blancos", "digitos", "letras", "lineas", "otros", "total");
// imprime las cantidades segun titulo y la suma de todos
printf("%10d%10d%10d%10d%10d%10d\n\n", nBlancos, nDigitos, nLetras, nNulineas, nOtros,nBlancos+nDigitos+nLetras+nNulineas+nOtros);

}
