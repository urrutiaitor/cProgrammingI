#include <stdio.h>
#include <string.h>
#include <math.h>

#define BIZTANLERIA 10

typedef struct data{
	int eguna;
	int illea;
	int urtea;
	int adina;

}DATA;

typedef struct datoa{
	int kodea;
	char izena[20];
	char ab1[20];
	char ab2[20];
	char dir[20];
	DATA jaiotzeData;

}DATOA;

int biztanleriaBete(DATOA datoak[BIZTANLERIA]);
void biztanleriaZerora(DATOA datoak[BIZTANLERIA]);
void jubilatuakSelekzionatu(DATOA datoak[BIZTANLERIA], int biztanleria);

int main(){
	//aldagaiak
	DATOA datoak[BIZTANLERIA];
	DATOA jubilatuak[BIZTANLERIA];
	int biztanleria = 0;

	//programa
	biztanleriaZerora(datoak);
	biztanleria=biztanleriaBete(datoak);
	jubilatuakSelekzionatu(datoak, biztanleria);
	

	//bukaera
	printf("Sakatu ENTER bukatzeko");
	fflush(stdin);
	getchar();
	return 0;
}
void biztanleriaZerora(DATOA datoak[BIZTANLERIA]){
	//aldagaiak
	int i = 0;

	//programa
	for (i = 0; i < BIZTANLERIA; i++){
		datoak[i].kodea = 0;
	}
}

int biztanleriaBete(DATOA datoak[BIZTANLERIA]){
	//aldagaiak
	int segi = 1, i = 0;

	//programa
	while (segi == 1){
		datoak[i].kodea = i;
		printf("Sartu %i pertsonaren izena:\n",i);
		gets(datoak[i].izena);
		printf("Sartu %i pertsonaren izena:\n",i);
		gets(datoak[i].ab1);
		printf("Sartu %i. pertsonaren izena:\n",i);
		gets(datoak[i].ab2);
		printf("Sartu &i pertsonaren helbidea:\n",i);
		gets(datoak[i].dir);
		printf("Sartu %i pertsona jaio zen urtea:\n",i);
		scanf("%i", datoak[i].jaiotzeData.urtea);
		printf("Sartu %i pertsona jaio zen illea:\n",i);
		scanf("%i", datoak[i].jaiotzeData.illea);
		printf("Sartu %i pertsona jaio zen eguna:\n",i);
		scanf("%i", datoak[i].jaiotzeData.eguna);
		i++;
		datoak[i].jaiotzeData.adina = 2013 - datoak[i].jaiotzeData.urtea;
		printf("Beste biztanle bat sartu behar duzu? BAI(1)/EZ(0)\n");
		scanf("%i", &segi);
	}
	
	//return
	return i;
}

void jubilatuakSelekzionatu(DATOA datoak[BIZTANLERIA], int biztanleria){
	//aldagaiak
	int i = 0;

	//programa
	for (i = 0; i < biztanleria; i++){
		if (datoak[i].jaiotzeData.adina>64){
			jubilatuak[t]=
		}
	}
}