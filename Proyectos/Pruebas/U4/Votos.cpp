#include<stdio.h>
#include <string.h>
struct datos
{
char nombre[40];
char coalision[25];
};
struct candidato
{
int posicion;
int votos;
struct datos pers;
};

int main()
{
	int i,posmay,maynmed=0,cand;
	char nomIngresa; char* coaliIngresa;
	int poscIngresa; int votIngresa;
	do{
		printf("Ingrese numero de candidatos");scanf("%d",&cand);
	} while (cand<=1);
	struct candidato municipal[cand];
	
	for(i=0;i<cand;i++)
	{
		 printf("Ingrese datos del candidato %d: \n",cand);
		 printf("Nombre: ");
		 scanf("%c",municipal[i].pers.nombre);
		 printf("Coalision: ");
		 scanf("%c",municipal[i].pers.coalision);
		 printf("Posicion: ");
		 scanf("%d",municipal[i].posicion);
		 printf("Votos: ");
		 scanf("%d",municipal[i].votos);
	}
	
	/*for(i=0;i<cand;i++)
	{
		 // aquí la obtencion del ganador
	}
	printf("\n\t****DATOS DEL CANDIDATO CON MAYOR NUMERO DE VOTOS****\n");
	printf("NOMBRE: %s\n",municipal[posmay].pers.nombre);
	printf("COALICION: %s\n",municipal[posmay].pers.coalision);
	printf("POSICION: %d\n",municipal[posmay].posicion);
	printf("NUMERO DE VOTOS: %d\n",municipal[posmay].votos);
	*/
	return 0;
}
