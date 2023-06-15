#include <stdio.h>
//Se crea funcion tipo flotante que calula la suma armonica tomando como argumento la varialbe int a(numero que determina la cantidades de veces quer se sumara el  calculo)
float calculo(int a) {
	//Se instancia variable tipo float para el calculo y su retorno en la funcion
	float total = 0;
	//Se recorre la variable a de mayor a menor
	for(int j = a; j>0;j--){
		//Se suma cada calculo a total
		total += 1/(float)j;
	}
	//Se retorna calculo completo
	return total;
}
//Se crea funcion tipo int para devolver un numero entre 1 y 100 para determinar la cantidades de veces que se realizara el calculo armonico 
int entraDatos() {
	//Se instancia la variable tipo int para rescatar el numero
	int a = 0;
	//Bucle, hacer-mientras a es menor a 1 y mayor a 100
	do{
		//Solicita ingresar el numero y lo guarda en la variable a para retornar
		printf("Por favor introduzca un numero entre 1 y 100: ");
		scanf("%d", &a);
		//Si el numero ingresado es menor a 1 y mayor a 100 activa el loop do-while
	}while (a < 1 || a > 100);
	//Retorna el numero
	return a;
}
int main() {
	//Se instancia variable suma como resultado de la suma armonica (debe ser flotante para la lectura de decimales)
	float suma = 0.0f;
	//Se instancia numero para obtener el numero ingresado indicando la cantidad de veces que se sumara (debe ser int ya que se contabiliza como numero enteros 1,2,3,4)
	int numero = 0;
	//Se llama funcion para obtener le numero de cantidades de veces que se realizara el calculo
	numero = entraDatos();
	//Se llama la funcion que obtiene el calculo de suma armonica envinado el numero de cantidaddes de veces que se sumara
	suma = calculo(numero);
	//Se imprime resultado
	printf("La suma armónica es: %f\n ", suma);
	//Termina programa
	return 0;
}


