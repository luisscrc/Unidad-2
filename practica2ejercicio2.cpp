/*Un alumno ingresa 5 calificaiones 
se obtiene promedio y se despliega 
"aprobado" o "reprobado" en caso de que
su promedio sea mayor que 6 */
#include<stdio.h>
#include<stdlib.h>
int main()
{
float a,b,c,d,e,prom;
printf("Ingresa la primera calificacion  \n");
scanf("%f",&a);
printf("Ingresa la segunda calificacion  \n");
scanf("%f",&b);
printf("Ingresa la tercera calificacion  \n");
scanf("%f",&c);
printf("Ingresa la cuarta calificacion  \n");
scanf("%f",&d);
printf("Ingresa la quinta calificacion  \n");
scanf("%f",&e);
prom=(a+b+c+d+e)/5;
if(prom<6){
	printf("Tu calificacion es %f y estas reprobado\n",prom);
}
else{
	printf("Tu calificacion es %f y has aprobado\n ",prom);
}
system("PAUSE");
return 0;
}
