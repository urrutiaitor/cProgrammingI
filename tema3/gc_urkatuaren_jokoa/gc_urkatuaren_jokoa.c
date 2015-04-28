#include <stdio.h>

int hitzasartu(char hitza[3][30]);
int hitzaasmatu(char hitza[3][30], int luzera);

int main(){
	//aldagaiak
	int luzera = 0;
	char hitza[3][30];
	int asmatua = 0;
	int i = 0;

	//programa
	luzera = hitzasartu(hitza);
	asmatua=hitzaasmatu(hitza, luzera);

	if (asmatua == 1){
		printf("Hitza asmatzea lortu duzu! Zorionak!\n");
		printf("Hitza honako hau izan da:\n");
		for (i = 0; i < luzera; i++){
			printf("%c", hitza[1][i]);
		}
		printf("\n");
	}

	if (asmatua == 0){
		printf("Ez duzu hitza asmatu\n");
		printf("Hitza honako hau izan da:");
		for (i = 0; i < luzera; i++){
			printf("%c", hitza[0][i]);
		}
		printf("\n");
	}

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}

int hitzasartu(char hitza[3][30]){
	//aldagaiak
	int i = -1, luzera = 0;
	char hitz[30];

	//programa
	printf("Sartu hitzaren karaktere kopurua (espazioak ere kontatu behar dira)\n");
	scanf("%i", &luzera);
	printf("Sartu hitza:\n");
	fflush(stdin);
	gets(hitz);


	for (i = 0; i < luzera; i++){
		hitza[0][i] = hitz[i];
	}

	system("cls");

	//return
	return luzera;
}

int hitzaasmatu(char hitza[3][30], int luzera){
	//aldagaiak
	int asmatua = 0;
	int i = 0;
	int erroreak = 0;
	char karakterea;
	int turnokoerrorea = 0;

	//programa
	for (i = 0; i < luzera; i++){
		hitza[1][i] = '_';
	}

	while ((erroreak <= 7)&&(asmatua==0)){
		
		for (i = 0; i < luzera; i++){
			printf("%c", hitza[1][i]);
			printf(" ");
		}
		printf("\n");

		printf("Erroreak: %i\n", erroreak);

		printf("Letra:");
		fflush(stdin);
		scanf("%c", &karakterea);
		turnokoerrorea = 0;
		for (i = 0; i < luzera; i++){
			if (karakterea == hitza[0][i]){
				hitza[1][i] = hitza[0][i];
			}
			else{
				turnokoerrorea++;
			}
		}
		if (turnokoerrorea == luzera){
			erroreak++;
		}

		asmatua = 1;
		for (i = 0; i < luzera; i++){
			if ((hitza[1][i]) != (hitza[0][i])){
				asmatua=0;
			}
		}
		printf("\n\n");
	}

	//reuturn
	return asmatua;

}