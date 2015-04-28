#include <stdio.h>

void matrizea_jaso(int matrizea[30][30]);
void handiena_txikiena(int matrizea[30][30]);

int main(){
	//aldagaiak
	int matrizea[30][30];

	//programa
	matrizea_jaso(matrizea);
	handiena_txikiena(matrizea);

	//bukaera
	printf("Sakatu tekla bat bukatzeko...");
	fflush(stdin);
	getchar();
	return 0;
}

void matrizea_jaso(int matrizea[30][30]){
	//aldagaiak
	int i = 0, t = 0;

	//programa
	for (i = 0; i < 4; i++){
		for (t = 0; t < 3; t++){
			printf("Sartu %i,%iko balorea: ", i, t);
			scanf("%i", &matrizea[i][t]);
		}
	}
}

void handiena_txikiena(int matrizea[30][30]){
	//aldagaiak
	int i = 0, t = 0;
	int handiena = 0, txikiena = 0;

	//programa
	handiena = matrizea[0][0];
	for (i = 0; i < 4; i++){
		for (t = 0; t < 3; t++){
			if (matrizea[i][t]>handiena){
				handiena = matrizea[i][t];
			}
		}
	}
	txikiena = matrizea[0][0];
	for (i = 0; i < 4; i++){
		for (t = 0; t < 3; t++){
			if (txikiena>matrizea[i][t]){
				txikiena = matrizea[i][t];
			}
		}
	}

	printf("Handiena: %i\n", handiena);
	printf("Txikiena: %i\n", txikiena);
}