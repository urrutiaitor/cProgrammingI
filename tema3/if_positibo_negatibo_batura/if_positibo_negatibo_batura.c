#include <stdio.h>

void matrizea_jaso(int matrizea[30][30], int neurriak[2]);
void gehiketak(int matrizea[30][30], int neurriak[2]);

int main(){
	//aldagaiak
	int matrizea[30][30], neurriak[2];

	//programa
	matrizea_jaso(matrizea, neurriak);
	gehiketak(matrizea, neurriak);

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}

void matrizea_jaso(int matrizea[30][30], int neurriak[2]){
	//aldagaiak
	int i = 0, t = 0;

	//programa
	printf("Matrizearen lerroak? ");
	scanf("%i", &neurriak[0]);
	printf("Matrizearen zutabeak? ");
	scanf("%i", &neurriak[1]);

	for (i = 0; i < neurriak[0]; i++){
		for (t = 0; t < neurriak[1]; t++){
			printf("Sartu %i,%iko balorea: ", i, t);
			scanf("%i", &matrizea[i][t]);
		}
	}
}

void gehiketak(int matrizea[30][30], int neurriak[2]){
	//aldagaiak
	int i = 0, t = 0, positiboen_batura = 0, negatiboen_batura = 0;

	//programa
	for (i = 0; i < neurriak[0]; i++){
		for (t = 0; t < neurriak[1]; t++){
			if (matrizea[i][t]>=0){
				positiboen_batura = positiboen_batura + matrizea[i][t];
			}
			else{
				negatiboen_batura = negatiboen_batura + matrizea[i][t];
			}
		}
	}
	printf("Positiboen batura: %i\n", positiboen_batura);
	printf("Negatiboen batura: %i\n", negatiboen_batura);
}