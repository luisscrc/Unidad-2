/*Este programa convierte segundos en horas, minutos y tambien muestra los segundo; dependiendo de que valores necesite mostrar*/

#include<stdio.h>
#include<stdlib.h>
main(){
	int segundo, residuo1,residuo2;
	float minutos, horas, segundos;

	printf("Ingrese el tiempo en segundos:    ");
	scanf("%d",&segundo);	
    horas=segundo/3600;
	horas=(int)(segundo/3600);
    residuo1=segundo%3600;
    minutos=residuo1/60;
    minutos=(int)(residuo1/60);
    residuo2=residuo1/60;
    residuo2=residuo1%60;
    if (residuo1>0){ 
       if (residuo2>0){
       segundos=residuo2;
       printf("%d segundos son %.1f  horas con %.1f minutos y %.1f segundos\n ", segundo, horas, minutos, segundos);
                      }
     else{
          printf("%d segundos son %.1f  horas con %.1f minutos\n", segundo, horas, minutos);
         }
                   }
    else{
	     printf("%d segundos son %.1f  horas\n", segundo, horas);
        }
system("PAUSE");
return 0;
}
