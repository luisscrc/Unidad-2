/*Este programa permite conocer el volumen y area de un cono en funcion del radio y altura*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main()
{
float radio, altura, lado, area, volumen;
const float pi=3.1416;

printf("Ingrese el valor del radio:      ");
scanf("\n%f",&radio);
printf("Ingrese el valor de la altura:   ");
scanf("\n%f",&altura);

lado=sqrt((radio*radio)+(altura*altura));
area=(2*pi*radio*lado/2)+pi*radio*radio;
volumen=(pi*(radio*radio)*altura)/3;

printf("El area es:                      %f\n",area);
printf("El volumen es:                   %f\n",volumen);

system("PAUSE");
return 0;
}
