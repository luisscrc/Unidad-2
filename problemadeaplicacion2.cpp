/*Este programa identifica un tipo de ciclo para una variable asignada (fruta)
en cada caso llegará a un límite para establecer una temperatura establecida */
/*Intervalos 
tomate 50-60%
melon 60-70%
pepino 70-90%*/
#include <STDIO.H>
#include <TIME.H>
#include <windows.h>
int main() {
int fruta;
float temperatura;
printf("Para estabilizar la humedad primero escoja una fruta\nPara tomate presione 1, \nPara melon presione 2, \nPara papino persione 3\n");
scanf("%d",&fruta);
if(fruta=1){ //tomate 
     printf("Ingrese la humedad en este momento\n");
     scanf("%f",&temperatura);
            for(temperatura<50;temperatura>60;temperatura++){
            temperatura=temperatura-(temperatura*0.03);
        	printf("La temperatura es %f %\n",temperatura); // Escribe el número actual de la 'cuenta regresiva'
            Sleep (10000); // Espera diez segundos
            }
            printf("Humedad necesaria para cosechar tomates");
        	return 0;
            }
else if (fruta=2) { //Melon
printf("Ingrese la humedad en este momento\n");
     scanf("%f",&temperatura);
            for(temperatura<60;temperatura>70;temperatura++){
            temperatura=temperatura-(temperatura*0.03);
        	printf("La temperatura es %f %\n",temperatura); // Escribe el número actual de la 'cuenta regresiva'
            Sleep (10000); // Espera diez segundos
            }
            printf("%f Humedad necesaria para cosechar melones", temperatura);
        	return 0;
            }    
 				
else if (fruta=3) { //pepino
printf("Ingrese la humedad en este momento\n");
     scanf("%f",&temperatura);
            for(temperatura<70;temperatura>90;temperatura++){
            temperatura=temperatura-(temperatura*0.03);
        	printf("La temperatura es %f %\n",temperatura); // Escribe el número actual de la 'cuenta regresiva'
            Sleep (10000); // Espera un segundo
            }
            printf("%f Humedad necesaria para cosechar tomates",temperatura);
        	return 0;
            }      
 				}     
