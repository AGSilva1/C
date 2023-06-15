#include <stdio.h>
#include <stdlib.h>
int main() {
int nBlancos=0, nDigitos=0, nLetras=0, nNulineas=0, nOtros=0, c = 0;
FILE *fichero;
char letras[100];

if(!(fichero = fopen("IntProg_U4.txt", "rt"))){
	
}

fgets(letras,100,fichero);
printf("%s",letras);
//while (c=fgetc(fichero) == EOL)
//{
//aqui va tu analisis y conteo
//}
//printf("%10s%10s%10s%10s%10s%10s\n\n","blancos", "digitos", "letras", "lineas", "otros", "total");
//printf("%10d%10d%10d%10d%10d%10d\n\n", nBlancos, nDigitos, nLetras, nNulineas, nOtros,nBlancos+nDigitos+nLetras+nNulineas+nOtros);
}
