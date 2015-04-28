#include <stdio.h>

int main(){
	//aldagaiak
	int lerroak = 0, zutabeak = 0, i = 0, t = 0;
	int matrizea[20][20];
	int batura = 0, txikiena = 0;

	//programa
	printf("Zenbat lerro edo zutabe?\n");
	scanf("%i", &lerroak);
	zutabeak = lerroak;

	for (i = 0; i < lerroak; i++){
		for (t = 0; t < zutabeak; t++){
			printf("Sartu %i,%i lekuko balioa: >", i, t);
			scanf("%i", &matrizea[i][t]);
		}
	}
	for (i = 0; i < lerroak; i++){
		batura = batura + matrizea[i][i];
	}
	for (i = 0; i < lerroak; i++){
		batura = batura + matrizea[lerroak-i-1][lerroak-i-1];
	}

	printf("Diagonal nagusien batura: %i\n", batura);

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}