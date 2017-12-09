/*Este programa genera un histograma de una lista de 100 valores
es decir, se generan valores aleatorios entre 1 y 10 y se guardan
en un arreglo unidimensional de 100 elementos. Posteriormente se 
muestra la frecuencia de cada valor guardado en dicho arreglo. Para
eso se utiliza otro arreglo unidimensional de 10 elementos ya que 
los valores aleatorios estarán comprendidos entre 1 y 10.*/
#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int a,i,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0;
	int elementos[100],frecuencia[10];
srand(time(NULL));
	for(i=0;i<100;i++){
		elementos[i]=(1+rand()%10);
		printf("%d\n",elementos[i]);
	}
	for(i=0;i<100;i++){
		if (elementos[i]==1){
		j=j+1;
		frecuencia[0]=;
		}
		else if (elementos[i]==2){
		k=k+1;
		}
		else if (elementos[i]==3){
		l=l+1;
		}
		else if (elementos[i]==4){
		m=m+1;
		}	
		else if (elementos[i]==5){
		n=n+1;
		}
		else if (elementos[i]==6){
		o=o+1;
		}
		else if (elementos[i]==7){
		p=p+1;
		}
		else if (elementos[i]==8){
		q=q+1;
		}
		else if (elementos[i]==9){
		r=r+1;
		}
		else if (elementos[i]==10){
		s=s+1;
		}
	}
printf("hay elementos 1; %d\nhay elementos 2; %d\nhay elementos 3; %d\nhay elementos 4; %d\nhay elementos 5; %d\nhay elementos 6; %d\nhay elementos 7; %d\nhay elementos 8; %d\nhay elementos 9; %d\nhay elementos 10; %d\n ",j,k,l,m,n,o,p,q,r,s);
a=j+k+l+m+n+o+p+q+r+s;
printf("total de elementos ; %d",a);
getch();
return 0;
}
