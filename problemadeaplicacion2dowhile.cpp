/*Este programa identifica un tipo de ciclo para una variable asignada (fruta)
en cada caso llegará a un límite para establecer una temperatura establecida */
/*Intervalos 
tomate 50-60%
melon 60-70%
pepino 70-90%*/
#include <STDIO.H>
#include <TIME.H>
#include <windows.h>

int main()
{
int fruta;
float temperatura,i;

printf("Para estabilizar la humedad primero escoja una fruta\nPara tomate presione 1, \nPara melon presione 2, \nPara papino persione 3\n");
scanf("%d",&fruta);

if(fruta=1){ //tomate 
     
     
          do {
          	printf("Ingrese la humedad en este momento ");
    		scanf("%f",&temperatura);
            temperatura=temperatura-(temperatura*0.03);
        	printf("La temperatura es %f %\n",temperatura); // Escribe el número actual de la 'cuenta regresiva'
            Sleep (10000); // Espera un segundo
            }
          while (temperatura<60); 
        	return 0;
            }
else if(fruta=2){
     do {
          	printf("Ingrese la humedad en este momento ");
    		scanf("%f",&temperatura);
            temperatura=temperatura-(temperatura*0.03);
        	printf("La temperatura es %f %\n",temperatura); // Escribe el número actual de la 'cuenta regresiva'
            Sleep (10000); // Espera un segundo
            }
          while (temperatura<70); 
          printf("%f Humedad necesaria para cosechar melones", temperatura);
        	return 0;
            }
else if(fruta=3){
       do {
          	printf("Ingrese la humedad en este momento ");
    		scanf("%f",&temperatura);
            temperatura=temperatura-(temperatura*0.03);
        	printf("La temperatura es %f %\n",temperatura); // Escribe el número actual de la 'cuenta regresiva'
            Sleep (10000); // Espera un segundo
            }
          while (temperatura<90); 
          printf("%f Humedad necesaria para cosechar melones", temperatura);
        	return 0;
            }
				}     

