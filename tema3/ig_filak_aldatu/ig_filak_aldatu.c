#include <stdio.h>

void matrizea_jaso(int matrizea[30][30]);
void aldaketak(int matrizea[30][30]);

int main(){
	//aldagaiak
	int matrizea[30][30];

	//programa
	matrizea_jaso(matrizea);
	aldaketak(matrizea);

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}

void matrizea_jaso(int matrizea[30][30]){
	//aldagaiak
	int i = 0, t = 0;

	//programa
	for (i = 0; i < 4; i++){
		for (t = 0; t < 4; t++){
			printf("Sartu %i,%iko balorea: ", i, t);
			scanf("%i", &matrizea[i][t]);
		}
	}
}

void aldaketak(int matrizea[30][30]){
	//aldagaiak
	int i = 0, t = 0, positiboen_batura = 0, negatiboen_batura = 0;
	int aux = 0, lerroa1 = 0, lerroa2 = 0;

	//programa
	printf("Sartu lehenengo lerroa:\n");
	scanf("%i", &aux);
	lerroa1 = aux - 1;
	printf("Sartu bigarrengo lerroa:\n");
	scanf("%i", &aux);
	lerroa2 = aux - 1;

	for (i = 0; i < 4; i++){
		aux = matrizea[lerroa1][i];
		matrizea[lerroa1][i] = matrizea[lerroa2][i];
		matrizea[lerroa2][i] = aux;
	}

	for (i = 0; i < 4; i++){
		printf("|");
		for (t = 0; t < 4; t++){
			printf("%i\t", matrizea[i][t]);
		}
		printf("|\n");
	}
}