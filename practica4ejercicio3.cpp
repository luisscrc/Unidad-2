#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float entero_potencia(float base, int exp){
	float res;
	res=pow(base,exp);
	return res;
}
int main() {
	float base,tot;
	int exp;	
	printf("Por favor ingrese la base del numero\n");
	scanf("%f",&base);
	printf("Por favor ingrese el exponente del numero\n");
	scanf("%d",&exp);
	tot=entero_potencia(base,exp);
	printf("El resultado es %.2f\n",tot);
	getch();
	return 0;
}
