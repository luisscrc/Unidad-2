#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float calcular_volumen(float ancho,float largo,float alto){
	float vol;
	vol=ancho*largo*alto;
	return vol;
}

int main(){
	float alto,ancho,largo,volumen;
	float vol,vol1,vol2,vol3,volt;
	printf("por favor ingresa los valores de la primera habitacion\n");
	scanf("%f",&ancho);
	fflush(stdin);
	scanf("%f",&largo);
	fflush(stdin);
	scanf("%f",&alto);
	fflush(stdin);	
	vol=calcular_volumen(ancho,largo,alto);
	vol1=vol;
	printf("El volumen es %f\n",vol);
	
	printf("por favor ingresa los valores de la segunda habitacion\n");
	scanf("%f",&ancho);
	fflush(stdin);
	scanf("%f",&largo);
	fflush(stdin);
	scanf("%f",&alto);
	fflush(stdin);	
	vol=calcular_volumen(ancho,largo,alto);
	vol2=vol;
	printf("El volumen es %f\n",vol);
	
	printf("por favor ingresa los valores de la tercera habitacion\n");
	scanf("%f",&ancho);
	fflush(stdin);
	scanf("%f",&largo);
	fflush(stdin);
	scanf("%f",&alto);
	fflush(stdin);	
	vol=calcular_volumen(ancho,largo,alto);
	vol3=vol;
	printf("El volumen es %f\n",vol);
	
	volt=vol1+vol2+vol3;
		printf("El volumen total es %f\n",volt);
return 0;
}
