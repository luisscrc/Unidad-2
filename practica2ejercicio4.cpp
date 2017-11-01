/*Para utilizar este programa se define el numero de 
productos y luego el tipo para desplegar la cuenta*/
#include<stdio.h>
#include<stdlib.h>
int main() {
int productos,seleccion,x;
float total;
total=0;
printf("Digite la cantidad de productos: \n");
scanf("%d",&productos);
x=0;
while (x<productos){
	printf("Digite el tipo de producto: \n Hamburguesa con papas 1, \n Hotdog y refresco es 2\n Ensalada rusa es 3\n");
	scanf("%d",&seleccion);
	if (seleccion==1){
		total=total+20;
					 }
	else if(seleccion==2){
			total=total+18;
						 }
	else if (seleccion==3){
		total=total+15;
	}
	x=x+1;	
}
printf("Tu total es de %f pesos\n",total);
system("PAUSE");
return 0;
}
