#include <stdio.h>
#include <conio.h>
int main(){
	float venta, iva, total;
	printf("Cual fue tu venta?");
	scanf("%f", &venta);
    iva = venta * 0.16;
    total = venta + iva;
    printf("Total: %f", total);
    getch();
    return 0;
}
