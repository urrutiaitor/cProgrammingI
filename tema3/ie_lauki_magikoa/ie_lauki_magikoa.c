#include <stdio.h>

void matrizea_sortu(int matrizea[30][30], int neurriak[10]);
int matrizea_konprobatu(int matrizea[30][30], int neurriak[10]);

int main(){
	//aldagaiak
	int matrizea[30][30];
	int neurriak[10];
	int egokia = 0;

	//programa
	matrizea_sortu(matrizea, neurriak);
	egokia = matrizea_konprobatu(matrizea, neurriak);

	if (egokia == 1){
		printf("Laukia magikoa da\n");
	}

	if (egokia == 0){
		printf("Laukia ez da magikoa\n");
	}

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}

void matrizea_sortu(int matrizea[30][30], int neurriak[10]){
	//aldagaiak
	int i = 0, t = 0;

	//programa
	printf("Zenbat lerro izango ditu?\n");
	scanf("%i", &neurriak[0]);
	printf("Zenbat zutabe izango ditu?\n");
	scanf("%i", &neurriak[1]);

	for (i = 0; i < neurriak[0]; i++){
		for (t = 0; t < neurriak[1]; t++){
			printf("%i,%i lekuko balorea? >");
			scanf("%i", &matrizea[i][t]);
			while ((matrizea[i][t]<1) || (matrizea[i][t]>9)){
				printf("Zenbakia ez da egokia. Sartu beste bat >");
				scanf("%i", matrizea[i][t]);
			}
		}
	}
}

int matrizea_konprobatu(int matrizea[30][30], int neurriak[10]){
	//aldagaiak
	int egokia = 0;
	int zutabeak[neurriak[0]], lerroak[neurriak[1]], diagonalak[2];
	int i = 0, t = 0, txikiena = 0;

	//programa - zutabe bakoitzaren batura
	for (i = 0; i < neurriak[1]; i++){
		for (t = 0; t < neurriak[0]; t++){
			zutabeak[i] = zutabeak[i] + matrizea[i][t];
		}
	}

	//programa - lerro bakoitzaren batura
	for (i = 0; i < neurriak[0]; i++){
		for (t = 0; t < neurriak[1]; t++){
			lerroak[t] = lerroak[t] + matrizea[i][t];
		}
	}

	//lerro edo zutabe laburrena aurkitzeko
	if (neurriak[0] <= neurriak[1]){
		txikiena = neurriak[0];
	}

	if (neurriak[0] > neurriak[1]){
		txikiena = neurriak[1];
	}

	//programa - diagonala y=-mx
	for (i = 0; i < txikiena; i++){
		diagonalak[0] = diagonalak[0] + matrizea[i][i];
	}
	
	//programa - diagonala y=mx
	for (i = 0; i < txikiena; i++){
		diagonalak[0] = diagonalak[0] + matrizea[txikiena-i][txikiena-i];
	}

	//orain konprobatu behar da ea batura guztiak koinziditzen duten!

	//return
	return egokia;
}