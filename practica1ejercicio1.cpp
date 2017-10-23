/*Este programa resuelve la ecuacion ((x+y)^2)(a-b)*/

#include <stdlib.h>
#include <stdio.h>
int main (){
	float x, y, a, b, res;

	printf("Ingrese el valor de x\n");
	scanf("%f",&x);
	printf("Ingrese el valor de y\n");
	scanf("%f",&y);
	printf("Ingrese el valor de a\n");
	scanf("%f",&a);
	printf("Ingrese el valor de b\n");
	scanf("%f",&b);

res=(x+y)*(x+y)*(a-b);
printf("El valor de res es: %f",res);

system("PAUSE");
return 0;
}
