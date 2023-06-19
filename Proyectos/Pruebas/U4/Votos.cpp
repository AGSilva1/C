#include<stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
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
	int poscIngresa; int votIngresa;
	do{
		printf("Ingrese numero de candidatos:\n");
		scanf("%d",&cand);
	}while (cand<2);
	
	struct candidato municipal[cand];
	
	
	for(i=0;i<cand;i++){
		printf("Ingrese datos del candidato %d: \n",i+1);
		do{			 
			printf("Nombre: ");
			scanf("%s",&municipal[i].pers.nombre);
			//printf("Candidato N: %s\n", municipal[i].pers.nombre);
		}while(municipal[i].pers.nombre=="");
		do{
			printf("Coalision: ");
			scanf("%s",&municipal[i].pers.coalision);
			//printf("Candidato C: %s\n", municipal[i].pers.coalision);	
		}while(municipal[i].pers.coalision=="");
		do{
			printf("Posicion: ");
			scanf("%d",&municipal[i].posicion);
			//printf("Candidato P: %d: \n", municipal[i].posicion);
			
		}while(municipal[i].posicion<0);	 
			 
		do{
			printf("Votos: ");
			scanf("%d",&municipal[i].votos);
			//printf("Candidato V: %d\n", municipal[i].votos);
		}while(municipal[i].votos<0);
	
	}
	for(i=0;i<cand;i++)
	{
		/*printf("\n\t****DATOS DEL CANDIDATO CON MAYOR NUMERO DE VOTOS****\n");
		printf("NOMBRE: %s\n",municipal[i].pers.nombre);
		printf("COALICION: %s\n",municipal[i].pers.coalision);
		printf("POSICION: %d\n",municipal[i].posicion);
		printf("NUMERO DE VOTOS: %d\n",municipal[i].votos);*/
		if(municipal[i].votos>maynmed){
			maynmed = municipal[i].votos;
			posmay = i;
		}
	}
	printf("\n\t****DATOS DEL CANDIDATO CON MAYOR NUMERO DE VOTOS****\n");
	printf("NOMBRE: %s\n",municipal[posmay].pers.nombre);
	printf("COALICION: %s\n",municipal[posmay].pers.coalision);
	printf("POSICION: %d\n",municipal[posmay].posicion);
	printf("NUMERO DE VOTOS: %d\n",municipal[posmay].votos);
	return 0;
}
