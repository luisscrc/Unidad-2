/*Este programa pide el nombre, horas y precio por hora y te muestra el impuesto y precio neto que tienes*/

#include <stdio.h>
#include <stdlib.h>

int main(){
      int horas, precio;
      float impuesto, neto, ingreso;
      char nombre [10], apellido [20];
      
      printf("ingresa tu nombre\n");
      scanf("%s",&nombre); 
      printf("ingresa tu apellido\n");
      scanf("%s",&apellido); 
      
       printf("ingresa tu precio\n");
      scanf("%d",&precio); 
      
      printf("ingresa tus horas trabajadas\n");
      scanf("%d",&horas); 
      
      ingreso=horas*precio; 
      impuesto=0.25*ingreso;
      neto=ingreso-impuesto;
       
        printf("Tu nombre es %s %s\n", nombre,apellido);
        printf("Tu ingreso es %f\n", ingreso);
        printf("Tu impuesto es %f\n", impuesto);
        printf("Tu sueldo neto es %f\n", neto);
       
      system("PAUSE");
      return 0;
      }
