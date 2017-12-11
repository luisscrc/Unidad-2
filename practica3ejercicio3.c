#include <stdio.h>
#include <stdlib.h>
int main() {
	int j,i,tmp,son,ags,oax,col,chi,slp,dur,ver,yuc,tab;
	int ene,feb,mar,abr,may,jun,jul,ago,sep,oct,nov,dic;
	int estados[10]={0,0,0,0,0,0,0,0,0,0};
    int mes[12]={0,0,0,0,0,0,0,0,0,0,0,0};
	int lluvias[10][12]={ 90,90,40,60,20,80,10,10,30,70,50,25,100,80,50,10,60,40,100,40,80,70,100,56,
70,90,60,20,80,50,20,60,30,70,110,60,
50,60,50,30,20,80,50,40,20,70,200,70,
90,90,60,40,80,70,60,40,30,50,10,40,
40,10,50,40,30,90,30,80,80,60,90,86,
100,40,20,50,10,100,90,80,100,70,130,120,
70,10,90,70,50,30,70,60,20,50,40,89,
40,30,40,70,10,100,20,20,70,20,90,66,
10,60,100,50,60,40,50,100,90,20,15,30 };
	for(j=0;j<10;j++){
		for(i=0;i<12;i++){
			estados[j]=estados[j]+lluvias[j][i];
		}
	}
son=estados[0];
ags=estados[1];
oax=estados[2];
col=estados[3];
chi=estados[4];
slp=estados[5];
dur=estados[6];
ver=estados[7];
yuc=estados[8];
tab=estados[9];
	for(j=8;j>0;j--){
		for(i=0;i<=j;i++){
		if(estados[i]>estados[i+1]){
        tmp=estados[i];
        estados[i]=estados[i+1];
        estados[i+1]=tmp;	
	}
}
}
	//a) estado que tuvo mayor lluvias
	for(i=0;i<12;i++){
    mes[i]=lluvias[1][i];
	}
    ene=mes[0];
    feb=mes[1];
    mar=mes[2];
    abr=mes[3];
    may=mes[4];
    jun=mes[5];
    jul=mes[6];
    ago=mes[7];
    sep=mes[8];
    oct=mes[9];
    nov=mes[10];
    dic=mes[11];
    for(j=10;j>=0;j--){
    for(i=0;i<j;i++){
        if(mes[i]>mes[i+1]){
        tmp=mes[i];
        mes[i]=mes[i+1];
        mes[i+1]=tmp;
        }
    }
}
        printf("a) El estado que tuvo el mayor registro de precipitacion pluvial durante el ultimo anio fue\n");
    if(estados[9]==son){
    	printf("Sonora\n");
	}
	if(estados[9]==ags){
    	printf("Aguascalientes\n");
	}
	if(estados[9]==oax){
    	printf("Oaxaca\n");
	}
	if(estados[9]==col){
    	printf("Colima\n");
	}
	if(estados[9]==chi){
    	printf("Chihuahua\n");
	}
	if(estados[9]==slp){
    	printf("San Luis Potosi\n");
	}
	if(estados[9]==dur){
    	printf("Durango\n");
	}
	if(estados[9]==ver){
    	printf("Veracruz\n");
	}
	if(estados[9]==yuc){
    	printf("Yucatan\n");
	}
	if(estados[9]==tab){
    	printf("Tabasco\n");
	}
//b) menor numero de lluvias
        printf("b) El estado que tuvo el menor registro de precipitacion pluvial durante el ultimo anio fue\n");
	if(estados[0]==son){
    	printf("Sonora\n");
	}
	if(estados[0]==ags){
    	printf("Aguascalientes\n");
	}
	if(estados[0]==oax){
    	printf("Oaxaca\n");
	}
	if(estados[0]==col){
    	printf("Colima\n");
	}
	if(estados[0]==chi){
    	printf("Chihuahua\n");
	}
	if(estados[0]==slp){
    	printf("San Luis Potosi\n");
	}
	if(estados[0]==dur){
    	printf("Durango\n");
	}
	if(estados[0]==ver){
    	printf("Veracruz\n");
	}
	if(estados[0]==yuc){
    	printf("Yucatan\n");
	}
	if(estados[0]==tab){
    	printf("Tabasco\n");
	}
//c)lluvias de aguascalientes
		printf("c) El mes que tuvo mayor registro de lluvias del estado de Aguascalientes del ultimo anio fue\n");    
	if(mes[11]==ene){
		printf("Enero\n");
	}
	if(mes[11]==feb){
		printf("Febrero\n");
	}
	if(mes[11]==mar){
		printf("Marzo\n");
	}
	if(mes[11]==abr){
		printf("Abril\n");
	}
	if(mes[11]==may){
		printf("Mayo\n");
	}
	if(mes[11]==jun){
		printf("Junio\n");
	}
	if(mes[11]==jul){
		printf("Julio\n");
	}
	if(mes[11]==ago){
		printf("Agosto\n");
	}
	if(mes[11]==sep){
		printf("Septiembre\n");
	}
	if(mes[11]==oct){
		printf("Octubre\n");
	}
	if(mes[11]==nov){
		printf("Noviembre\n");
	}
	if(mes[11]==dic){
		printf("Diciembre\n");
	}
	//getch();
	return 0;
}
