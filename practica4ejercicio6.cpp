#include <stdio.h>
#include <stdlib.h>
int factorial(int n){
	int i=1,tot=1;
	while(i<=n){
		tot=tot*i;
		i++;
	}
	return tot;
}
int main() {
	int n,tot;	
	printf("Intrese el valor del numero para calcular su factorial\n"); 
	scanf("%d",&n);
	tot=factorial(n);
	printf("El factorial del numero es: %d\n",tot);
	return 0;
}
