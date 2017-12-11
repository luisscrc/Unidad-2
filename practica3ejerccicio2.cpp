#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*  */
int main() 
{
	int h,i,matriz[10];
	for (i=0;i<10;i++)
	{
		printf("Ingresa un valor a la matriz\n");
		scanf("%d",&matriz[i]);
	}
	for(i=0;i<9;i++){
		for(h=i+1;h<10;h++){
		if (matriz[i]==matriz[h]){
			matriz[h]=0;
		}
		}
	}
	for(i=0;i<10;i++){
		printf("%d\n",matriz[i]);
	}
	getch();
	return 0;
}
