#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int main(){
    float A[3][3]={},detA;
    int i,j;
    printf("Introduce la matriz 3x3 a calcular su determinante...\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%f",&A[i][j]);
        }printf("\n");
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\t%.2f",A[i][j]);
        }printf("\n");
    }
    detA=(A[0][0]*A[1][1]*A[2][2])+(A[1][0]*A[2][1]*A[0][2])+(A[2][0]*A[0][1]*A[1][2])-(A[2][0]*A[1][1]*A[0][2])-(A[1][0]*A[0][1]*A[2][2])-(A[0][0]*A[2][1]*A[1][2]);
    printf("El determinante de A es= %.2f\n",detA);
  getch ();
  return 0;
}
