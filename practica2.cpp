/*Calcular la media de una serie de números positivos, suponiendo que los datos se leen desde un terminal. Un valor de cero ---como entrada--- 
indicará que se ha alcanzado el final de la serie de números positivos.
Algoritmo
1.    Inicializar contador de números C y variable de suma S.
2.    Leer un número.
3.    Si el número leído es cero:
Calcular la media;
Imprimir la media
Fin del proceso
Si el número leído no es cero:
Calcular la suma
Incrementar en uno el contador de números
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
