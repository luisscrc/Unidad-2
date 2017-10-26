/*Este programa convierte grados celsius a farenheit y viceversa*/
#include<stdio.h>
#include<stdlib.h>
main(){
	float grados,f,c;
	char letra;

	printf("Ingrese la temperatura con valor f o c:    ");
	scanf("%f %c",&grados, &letra);	
    
    if (letra=c){
		f=grados*(9/5)+32;
    	printf("%f grados celsius son %f grados Farenheit\n", grados, f);
    }
    else if(letra=f) {
    	c=(grados-32)*(5/9);
    	printf("%f grados Farenheit son %f grados Celsius\n", grados, c);
    }
system("PAUSE");
return 0;
}
