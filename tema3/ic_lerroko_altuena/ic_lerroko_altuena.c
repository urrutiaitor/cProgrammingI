#include <stdio.h>

int main(){
	//aldagaiak
	int lerroak = 0, zutabeak = 0, i = 0, t = 0;
	int matrizea[20][20];
	int batura = 0, txikiena = 0;
	int handiena = 0, lerroa = 0;

	//programa
	printf("Zenbat lerro?\n");
	scanf("%i", &lerroak);
	printf("Zenbat zutabe?\n");
	scanf("%i", &zutabeak);

	for (i = 0; i < lerroak; i++){
		for (t = 0; t < zutabeak; t++){
			printf("Sartu %i,%i lekuko balioa: >", i, t);
			scanf("%i", &matrizea[i][t]);
		}
	}
	printf("Zenbatgarren lerroko balioa nahi duzu?\n");
	scanf("%i", &lerroa);
	handiena = matrizea[lerroa - 1][i];
	for (i = 0; i < zutabeak; i++){
		if (matrizea[lerroa - 1][i]>handiena){
			handiena = matrizea[lerroa - 1][i];
		}
	}
	printf("Lerroko handiena: %i\n", handiena);

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}