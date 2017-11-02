/*Este programa utiliza un ciclo for
para determinar los valores de la funcion
f(x)=seno(2x)-x en el intervalo 0-10 con
incremento de 0.5*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
	float x,fx;
	x=0;
	fx=0;
for (x=0;x<=10;x=x+0.5){
	fx=sin(x*2)-x;
	printf("El valor de %f es %f\n",x,fx);	
}
system("PAUSE");
return 0;
}
