#include <stdio.h>

int main(){
	//aldagaiak
	int i = 0, t = 0;
	int matrizea[30][30], iraulia[30][30];
	int lerroak = 0, zutabeak = 0;

	//programa
	printf("Zenbat lerro izango ditu?");
	scanf("%i", &lerroak);
	printf("Zenbat zutabe izango ditu?");
	scanf("%i", &zutabeak);

	for (i = 0; i < lerroak; i++){
		for (t = 0; t < zutabeak; t++){
			printf("%i,%i ko balioa: ", i, t);
			scanf("%i", &matrizea[i][t]);
		}
	}
	printf("Zure matrizea honako hau da:\n");
	
	for (i = 0; i < lerroak; i++){
		printf("|\t");
		for (t = 0; t < zutabeak; t++){
			printf("%i\t", matrizea[i][t]);
		}
		printf("|\n");
	}

	for (i = 0; i < lerroak; i++){
		for (t = 0; t < zutabeak; t++){
			iraulia[t][i] = matrizea[i][t];
		}
	}

	printf("Zure matrizearen iraulia honako hau da:\n");

	for (i = 0; i < zutabeak; i++){
		printf("|\t");
		for (t = 0; t < lerroak; t++){
			printf("%i\t", iraulia[i][t]);
		}
		printf("|\n");
	}



	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}