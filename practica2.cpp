/*Calcular la media de una serie de n�meros positivos, suponiendo que los datos se leen desde un terminal. Un valor de cero ---como entrada--- 
indicar� que se ha alcanzado el final de la serie de n�meros positivos.
Algoritmo
1.    Inicializar contador de n�meros C y variable de suma S.
2.    Leer un n�mero.
3.    Si el n�mero le�do es cero:
Calcular la media;
Imprimir la media
Fin del proceso
Si el n�mero le�do no es cero:
Calcular la suma
Incrementar en uno el contador de n�meros
Ir al paso 2.
4.    Fin.
*/
#include<stdio.h>
#include<stdlib.h>
int main(){

int  cont;
float media, numero, suma;
cont=1;
suma=0;
media=0;

label:
printf("Ingrese un numero: \n");
scanf("%f",&numero);
if (numero==0){
      media=suma/cont;
      printf("\nLa media es:  %f\n", media);
}
 else {
     cont=cont+1;
     suma=numero+suma;
      printf("La suma es: %f\n", suma);
      goto label;
      }  
   system("PAUSE");
   return 0;
}
