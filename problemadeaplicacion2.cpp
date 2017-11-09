/*Este programa identifica un tipo de ciclo para una variable asignada (fruta)
en cada caso llegará a un límite para establecer una temperatura establecida 
Intervalos de humedad
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
if(fruta==1){ //tomate 50-60
     printf("Ingrese la humedad en este momento\n");
     scanf("%f",&temperatura);
     if(temperatura<50){
		for (temperatura=temperatura;temperatura<50;temperatura++){
			temperatura=temperatura+(temperatura*0.04);
			printf("Regando a fin de aumentar la humedad %f %\n",temperatura); // Escribe el número actual de la 'cuenta regresiva'
            Sleep (3000); // Espera diez segundos
		}			  }
        else if (temperatura>60){
		   for(temperatura<50;temperatura>60;temperatura++){
            temperatura=temperatura-(temperatura*0.03);
        	printf("Abriendo ventilacion para bajar la humedad... Ahora es %f grados\n",temperatura); // Escribe el número actual de la 'cuenta regresiva'
            Sleep (10000); // Espera diez segundos
            }}
            printf("Humedad necesaria para cosechar tomates");
        	return 0;
            }
else if (fruta==2) { //Melon 60-70
	 printf("Ingrese la humedad en estos momentos\n");
     scanf("%f",&temperatura);
	 if(temperatura<60){
		for (temperatura=temperatura;temperatura<60;temperatura++){
			temperatura=temperatura+(temperatura*0.04);
			printf("Regando a fin de aumentar la humedad %f %\n",temperatura); // Escribe el número actual de la 'cuenta regresiva'
            Sleep (3000); // Espera diez segundos
					}  }
        else if (temperatura>70){
            for(temperatura<60;temperatura>70;temperatura++){
            temperatura=temperatura-(temperatura*0.03);
        	printf("Abriendo ventilacion para bajar la humedad... Ahora es %f grados\n",temperatura); // Escribe el número actual de la 'cuenta regresiva'
            Sleep (10000); // Espera diez segundos
            }}
            printf("%f Humedad necesaria para cosechar melones", temperatura);
        	return 0;
            }    
else if (fruta==3) { //pepino 70-90
	 printf("Ingrese la humedad en este momento\n");
     scanf("%f",&temperatura);
     if(temperatura<70){
		for (temperatura=temperatura;temperatura<60;temperatura++){
			temperatura=temperatura+(temperatura*0.04);
			printf("Regando a fin de aumentar la humedad %f %\n",temperatura); // Escribe el número actual de la 'cuenta regresiva'
            Sleep (3000); // Espera diez segundos
					}  }
        else if (temperatura>90){
            for(temperatura<70;temperatura>90;temperatura++){
            temperatura=temperatura-(temperatura*0.03);
        	printf("Abriendo ventilacion para bajar la humedad... Ahora es %f grados\n",temperatura); // Escribe el número actual de la 'cuenta regresiva'
            Sleep (10000); // Espera un segundo
            }}
            printf("%f Humedad necesaria para cosechar pepinos",temperatura);
        	return 0;
            }      }//Fin de main     
