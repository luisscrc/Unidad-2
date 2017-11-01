/*Dada una funcion, ingresar un valor, 
si es negativo evaluar una condicion 
si es positiva evaluar otra.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
float x,y;
printf("Dada la funcion f(x)= x^2-x si x<=0\n              y f(x)=-x^2+3x si x>0\nIngresa el valor de x: \n");
scanf("%f",&x);

if(x<=0){
	y=(x*x)-(x);
	printf("El valor de la funcion si x=%f es %f\n",x,y);
}
else{
	y=-(x*x)+(3*x);
	printf("El valor de la funcion si x=%f es %f\n",x,y);
}
system("PAUSE");
return 0;
}
