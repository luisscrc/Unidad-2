/*En este programa se define una matriz A y se obtiene su transpuesta*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int i,j;
    float A[2][3]={{2,4,6},{8,10,12}};
    
    printf("Los elementos de la matriz A=\n");
    for (i=0;i<2;i++){
        for(j=0;j<3;j++){
                         printf("\t%f",A[i][j]);
                         }
        printf("\n");                            //Este print evita que la matriz A se deforme
        } 
    
     float At[3][2];                             //Obtencion de la matriz trasnpuesta
    for (i=0;i<3;i++){                           //At= Transpuesta de A  
        for(j=0;j<2;j++){
        At[i][j]=A[j][i];       
                         }
        printf("\n");
        }
    printf("At= \n");
    for (i=0;i<3;i++){
        for(j=0;j<2;j++){
                 At[i][j]=A[j][i];       
                 printf("\t %f",At[j][i]);
                         }
        printf("\n");                             //Este print evita que la matriz At se deforme
        }
    system("PAUSE");
    return 0;
    }
