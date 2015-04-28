#include <stdio.h>

int main(){
	//aldagaiak
	int lerroak = 0, zutabeak = 0, i = 0, t = 0;
	int matrizea[20][20];
	int batura = 0, txikiena = 0;

	//programa
	printf("Zenbat lerro?\n");
	scanf("%i", &lerroak);
	printf("Zenbat zutabe?\n");
	scanf("%i",&zutabeak);

	for (i = 0; i < lerroak; i++){
		for (t = 0; t < zutabeak; t++){
			printf("Sartu %i,%i lekuko balioa: >", i, t);
			scanf("%i", &matrizea[i][t]);
		}
	}
	if (zutabeak>lerroak){
		txikiena = lerroak;
	}
	if (zutabeak<=lerroak){
		txikiena = zutabeak;
	}
	for (i = 0; i < txikiena; i++){
		batura = batura + matrizea[i][i];
	}
	printf("Diagonal nagusiko batura: %i\n", batura);

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}