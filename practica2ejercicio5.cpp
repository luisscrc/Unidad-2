/*Este es un simulador de una calculadora basica
con if y else if*/
#include<stdio.h>
#include<stdlib.h>
int main() {
char operacion,salir;
float total,a,b;
do {
	printf("¿Cual es su operador?: \n");
	scanf("%s",&operacion);
	printf("Ingrese el valor de a\n");
	scanf("%f",&a);
	printf("Ingrese el valor de b\n");
	scanf("%f",&b);
	if (operacion=='+'){
		total=a+b;
		printf("El total de la suma es: %.3f\n",total);
					  }
	else if(operacion=='-'){
			total=a-b;
			printf("El total de la resta es: %.3f\n",total);	
						   }
	else if (operacion=='*'){
		total=a*b;
		printf("El total del producto es: %.3f\n",total);
							}
	else if (operacion=='/'){
		total=a/b;
		printf("El total del cociente es: %.3f\n",total);
							}
			printf("Para salir presiona s\nsino deseas salir presiona otra tecla\n");
			scanf("%s",&salir);
}
while (salir!='s');
system("PAUSE");
return 0;
}
