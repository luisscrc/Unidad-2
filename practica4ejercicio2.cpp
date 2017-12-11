#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calcular_serie(int n){
	int final=0,i=1;
    while(i<=n){
    	if((i%2)==1){
    		final=final+pow(i,i);
		}else{
			final=final-pow(i,i);
		}
		i++;
	}
	return final;
}
int main() {
	int n,final;
	printf("Ingrese el valor de n de la serie\n");
	scanf("%d",&n);
	final=calcular_serie(n);
	printf("El resultado de la serie es %d\n",final);
	return 0;
}
