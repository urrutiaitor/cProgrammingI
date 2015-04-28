#include <stdio.h>
#define ZUTABEAK 4
#define LERROAK 4

int main(){
	//aldagaiak
	int i = 0, t = 0, matrizea[5][5];

	//programa

	for (i = 0; i < LERROAK; i++){
		for (t = 0; t < ZUTABEAK; t++){
			matrizea[i][t] = 0;
		}
	}

	for (i = 0; i < LERROAK; i++){
		for (t = 0; t < ZUTABEAK; t++){
			matrizea[i][t] = t%2;
		}
	}

	for (i = 0; i < LERROAK; i++){
		printf("[");
		for (t = 0; t < ZUTABEAK; t++){
			printf(" %i\t", matrizea[i][t]);
		}
		printf(" ]\n");
	}


	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}