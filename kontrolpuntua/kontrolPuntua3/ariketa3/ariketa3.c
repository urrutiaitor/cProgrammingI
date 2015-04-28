#include <stdio.h>
#include <math.h>

#define LERROAK //SARTU LERRO KOPURUA
#define ZUTABEAK //SARTU ZUTABE KOPURUA
#define KOPURUA //SARTU ARRAYAREN LUZEERA

void matrizea_bistaratu(int matrizea[LERROAK][ZUTABEAK]);
int arraya_irakurri(int arraya[KOPURUA]);

int main(){
	//aldagaiak

	//programa

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}

void matrizea_bistaratu(int matrizea[LERROAK][ZUTABEAK]{
	//aldagaiak
	int i = 0;
	int z = 0;

	//programa

	for (i = 0; i < LERROAK; i++){
		printf("|");
		for (z = 0; z < ZUTABEAK; z++){
			printf("%i\t", matrizea[i][z]);
		}
		printf("|\n");
	}
}

int arraya_irakurri(int arraya[KOPURUA]){
	//aldagaiak
	char aux[KOPURUA];
	int i = 0;


	//programa
	printf("Sartu nahi duzun esaldia:\n");
	gets(aux);

	while ((aux[i] != '\0')&&(i < KOPURUA)){
		arraya[i] = aux[i];
		i++;
	}

	//bukaera
	return i;
}