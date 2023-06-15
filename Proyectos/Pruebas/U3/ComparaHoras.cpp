#include <stdio.h>

//Se instancia diferencia para calcular los segundos entre hora1 y hora2
int diferencia;

//Funcion que solicita la HORA
int hora() {
//Se instancias las variables de la hora separadas H=hora,M=minutos,S=segundos y error para su control de ingreso
int H, M, S, error;
//Se instancia la varialbe total como int para recolectar la hora ingresada en segundos para retornar
int total;

do {
//Se setea error en 0 por cada intento nuevo
error = 0;
//Se asigna cada seccion de una hora  en su sigla correspondiente en el formato señalado incluyendo los ":" (hh:mm:ss)
scanf("%d:%d:%d", &H, &M,&S);
//Se valida que la hora deba ser entre 0 y 23, en caso de que esten fuera del rango se summa en uno error
if(H>23 || H<0){
++error;
}
//Se valida que los minutos deban ser entre 0 y 59, en caso de que esten fuera del rango se summa en uno error
if(M>59 || M<0){
++error;
}
//Se valida que los segundos deban ser entre 0 y 59, en caso de que esten fuera del rango se summa en uno error
if(S>59 || S<0){
++error;
}
//Si error es mayor a 0 se solicita ingresar nuevamente la hora
if (error>0) {
printf("Hora incorrecta!!!!\n");
printf("Escribe la hora correcta: ");
}
//Si error es mayor a 0 activa loop do-while
} while(error>0);

//Transforma las horas en segundos agregandolos a total
total=H*3600;
//Transforma los minutos a segundos y suma los segundos, sumando el resultado al total
total+=(M*60+S);
//Retorna total
return total;
}

//Funcion principal
main() {
//Se instancias variables H=hora, M=minuto y S=Segundo
int H, M, S;
//Se instancias variblas S1=hora1 y S2=Hora2 para compararlas
int S1, S2;
printf("Escribe la primera hora XD (formato hh:mm:ss): ");
//Se llama funcion hora para ingresar la hora y rescatarla en total "segundos" para asignarla a hora1
S1=hora();

do {
printf("Escribe la segunda hora (posterior): ");
//Se llama funcion hora para ingresar la hora y rescatarla en total "segundos" para asignarla a hora2 
S2=hora();
//Si hora2 es menor a hora1 se vuelve a solicitar hora2 actiavando el loop do-while
} while (S2<=S1);
//Se obtiene la diferencia entre hora2 y hora1 opracion hora2-hora1 (en segundos)
diferencia=S2-S1;
//Se transforma la diferencia en horas asignandolas a variable H
H=diferencia/3600;
//se le resta a diferencia las horas tomadas
diferencia = diferencia - H*3600;
//Se transforma la diferencia restante en minutos asignandolas a variable M
M=diferencia/60;
//Se le resta a diferencia los minutos tomados
diferencia = diferencia - M*60;
//Se le asigna la diferencia restante a S
S=diferencia;
//Se implime diferencia
printf("La diferencia es %d hora(s), %d minuto(s), %d segundo(s)\n", H, M, S);
}

