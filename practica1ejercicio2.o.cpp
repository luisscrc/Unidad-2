#include <stdio.h>
#include <stdlib.h>

int main(){
	float pies, yardas, metro, centimetros, pulgadas;
		printf("Ingrese el valor en pies\n");
		scanf("%f",&pies);
	pulgadas=(pies*12);
	yardas=(pies/3);
	centimetros=(pies/0.0328084);	
	metro=(centimetros/100);
	
	printf("%f pies son %f pulgadas\n",pies,pulgadas);
	printf("%f pies son %f yardas\n",pies,yardas);	
	printf("%f pies son %f centimetros\n",pies,centimetros);
	printf("%f pies son %f metros\n",pies,metro);
system("PAUSE");
return 0;
}
