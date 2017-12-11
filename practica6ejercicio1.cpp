#include <stdio.h>
#include <stdlib.h>
int sumar(int a,int b);
int main() {
	int num1,num2;
    num1=5;
    num2=8;
    int total=sumar(num1,num2);
    total=total+2;
    printf("%d\n",total);
	return 0;
}
int sumar(int a, int b){
    int c=0;
    c=(a)+(b);
    printf("%d\n",c);
    return c;
}
