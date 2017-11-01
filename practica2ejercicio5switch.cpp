/*Este es un simulador de una calculadora basica
con case y do while*/
#include<stdio.h>
#include<stdlib.h>
int main() {
char salir,operacion;
float total,a,b;
do {
	printf("¿Cual es su operador?: \n");
	scanf("%s",&operacion);
	printf("Ingrese el valor de a\n");
	scanf("%f",&a);
	printf("Ingrese el valor de b\n");
	scanf("%f",&b);
switch (operacion)
{	
	case '+':
		total=a+b;
		printf("El total de la suma es: %.3f\n",total);
	break;
	case '-':
			total=a-b;
			printf("El total de la resta es: %.3f\n",total);	
	break;	
	case '*':
		total=a*b;
		printf("El total del producto es: %.3f\n",total);
	break;
	case '/':
		total=a/b;
		printf("El total del cociente es: %.3f\n",total);
	break;
}
printf("Desea salir presione s\nsino presiona otra tecla \n");
scanf("%s",&salir);
}
while (salir!='s');
system("PAUSE");
return 0;
}
