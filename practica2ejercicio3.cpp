/*Este programa calcula el costo por kilowatthora en 
funcion de cuotas en intervalos de 50 kwh, 100 kwh
y mas de 100 kwh*/
#include<stdio.h>
#include<stdlib.h>
int main() {
float x,kwh,cuota,total;
printf("Ingresa la cantidad de KiloWattsHora consumida: \n");
scanf("%f",&kwh);
cuota=0;
if(kwh<=100){
		if(kwh<=50){
			cuota=kwh*2.288;
			total=cuota+52.84;
			printf("El cargo es de %.2f pesos\n", total);	
			return 0;
				   }
	x=kwh-50;
	cuota=x*2.762;
	total=cuota+52.84+(50*2.288);
	printf("Tu cargo mensual es %.2f pesos\n",total);
	return 0;	
			}
else if (kwh>100){
	x=kwh-100;
	cuota=x*3.042;
	total=cuota+52.84+(50*2.288)+(50*2.762);
	printf("Tu cargo mensual es %.2f pesos\n",total);		
	return 0;
	}
system("PAUSE");
}
