#include <stdio.h>

void biderketa(int aMatriza[10][10], int bMatriza[10][10], int emaitzMatriza[10][10], int konprobaketa, int neurriak[2]);
int matrizeasortu(int aMatriza[10][10], int bMatriza[10][10]);

int main(){
	//aldagaiak
	int neurriak[2], konprobaketa = 0;
	int aMatriza[10][10], bMatriza[10][10], emaitzMatriza[10][10];

	//programa
	konprobaketa = matrizeasortu(aMatriza, bMatriza, neurriak);
	biderketa(aMatriza, bMatriza, emaitzMatriza, konprobaketa, neurriak);

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}

void biderketa(int aMatriza[10][10], int bMatriza[10][10], int emaitzMatriza[10][10], int konprobaketa, int neurriak[2]){
	//aldagaiak
	int i = 0;
	int t = 0;
	int w = 0;

	//programa
	if (konprobaketa == 0){
		for (i = 0; i < neurriak[3]; i++){
			for (t = 0; t < neurriak[2]; t++){
				emaitzMatriza[i][t] = 0;
			}
		}

	}
	if (konprobaketa == 1){
		for (i = 0; i < neurriak[0]; i++){ //i lerroak
			for (t = 0; t < neurriak[1]; t++){ //t zutabeak
				for (w = 0; w < neurriak[1]; w++){
					emaitzMatriza[i][t] = ((emaitzMatriza[i][t])+(aMatriza[i][t] * bMatriza[t][i]));

				}
			}
		}
	}
	printf("Matrizearen soluzioa honako hau da:\n");
	for (i = 0; i < neurriak[0]; i++){
		printf("[");
		for (t = 0; t < neurriak[1]; t++){
			printf(" %i\t", emaitzMatriza[i][t]);
		}
		printf(" ]\n");
	}

}

int matrizeasortu(int aMatriza[10][10], int bMatriza[10][10], int neurriak[2]){
	//aldagaiak
	int Lerroak = 0, Zutabeak = 0;
	int egokia = 0;
	int i = 0, t = 0;
	
	
	//programa
	printf("Zenbat lerro izatea nahi duzu emaitzak?\n");
	scanf("%i", &neurriak[0]);
	printf("Zenbat zutabe izatea nahi duzu emaitzak?\n");
	scanf("%i", &neurriak[1]);

	if ((neurriak[0] < 10)&&(neurriak[1] < 10)){
		egokia = 1;
		}


	for (i = 0; i < neurriak[0]; i++){
		for (t = 0; t < neurriak[1]; t++){
			printf("Sartu A matrizeko (%i,%i) posizioko balorea\n>)", i+1, t+1);
			scanf("%i", &aMatriza[i][t]);
		}
	}

	for (i = 0; i < neurriak[1]; i++){
		for (t = 0; t < neurriak[0]; t++){
			printf("Sartu B matrizeko (%i,%i) posizioko balorea\n>)", i+1, t+1);
			scanf("%i", &aMatriza[i][t]);
		}
	}

	//return
	return egokia;
}