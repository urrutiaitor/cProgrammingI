//ariketa ondo dago baina ez du bertikaleko barkuak ondo bistaratzen!

#include <stdio.h>
#define LERROAK 12
#define ZUTABEAK 11

void matrizeak_zerora(int matrizea[LERROAK][ZUTABEAK]);
void barko_bakoitza_jarri(int matrizea[LERROAK][ZUTABEAK], int itsasontzia);
void matrizeak_erakutzi(int matrizea[LERROAK][ZUTABEAK]);
void matrizea_bete(int matrizea1[LERROAK][ZUTABEAK], int matrizea2[LERROAK][ZUTABEAK]);

int main(){
	//aldagaiak
	int matrizea1[LERROAK][ZUTABEAK], matrizea2[LERROAK][ZUTABEAK];

	//programa
	matrizeak_zerora(matrizea1);
	matrizeak_zerora(matrizea2);

	matrizeak_erakutzi(matrizea1);
	matrizeak_erakutzi(matrizea2);

	matrizea_bete(matrizea1, matrizea2);

	matrizeak_erakutzi(matrizea1);
	matrizeak_erakutzi(matrizea2);


	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}

void matrizeak_zerora(int matrizea[LERROAK][ZUTABEAK]){
	//aldagaiak
	int i = 0, t = 0;

	//programa
	for (i = 0; i < LERROAK; i++){
		for (t = 0; t < ZUTABEAK; t++){
			matrizea[i][t] = 0;
		}
	}

}

void barko_bakoitza_jarri(int matrizea[LERROAK][ZUTABEAK], int itsasontzia){
	//aldagaiak
	int errorea = 1, y = 0, x = 0, i = 0, forma = 0;

	//programa
	while (errorea == 1){
		errorea = 0;
		printf("Barku bat jarriko da %i tamainakoa\n", itsasontzia);
		printf("Zenbatgarren lerroan hasiko da?\n");
		scanf("%i", &y);
		y = y - 1;
		printf("Zenbatgarren zutabean hasiko da?\n");
		scanf("%i", &x);
		x = x - 1;
		printf("Horizontalki(1)/Bertikalki(0)?\n");
		scanf("%i", &forma);
		for (i = 0; i < itsasontzia; i++){
			if (matrizea[y][x + i] != 0){
				errorea = 1;
				printf("Kokalekua ez da gokia. Ahalegindu berriro\n");
			}
			if (errorea != 1){
				if (forma == 1){
					for (i = 0; i < itsasontzia; i++){
						if (itsasontzia == 5){
							matrizea[y][x + i] = 'P';
						}
						if (itsasontzia == 4){
							matrizea[y][x + i] = 'A';
						}
						if (itsasontzia == 3){
							matrizea[y][x + i] = 'D';
						}
						if (itsasontzia == 2){
							matrizea[y][x + i] = 'S';
						}
					}
				}
				if (forma == 0){  //hemen dago arazoa bertikalean jarritako barkuetan
					for (i = 0; i < itsasontzia; i++){
						if (itsasontzia == 5){
							matrizea[y + 1][x] = 'P';
						}
						if (itsasontzia == 4){
							matrizea[y + 1][x] = 'A';
						}
						if (itsasontzia == 3){
							matrizea[y + 1][x] = 'D';
						}
						if (itsasontzia == 2){
							matrizea[y + 1][x] = 'S';
						}
					}
				}
			}
		}
	}


}

void matrizea_bete(int matrizea1[LERROAK][ZUTABEAK], int matrizea2[LERROAK][ZUTABEAK]){
	printf("Lehenengoko jokalariaren tabla beteko da\n");
	barko_bakoitza_jarri(matrizea1, 5);
	barko_bakoitza_jarri(matrizea1, 4);
	barko_bakoitza_jarri(matrizea1, 4);
	barko_bakoitza_jarri(matrizea1, 3);
	barko_bakoitza_jarri(matrizea1, 3);
	barko_bakoitza_jarri(matrizea1, 2);


	printf("Bigarren jokalariaren tabla beteko da\n");
	barko_bakoitza_jarri(matrizea2, 5);
	barko_bakoitza_jarri(matrizea2, 4);
	barko_bakoitza_jarri(matrizea2, 4);
	barko_bakoitza_jarri(matrizea2, 3);
	barko_bakoitza_jarri(matrizea2, 3);
	barko_bakoitza_jarri(matrizea2, 2);
}

void matrizeak_erakutzi(int matrizea[LERROAK][ZUTABEAK]){
	//aldagaiak
	int i = 0;
	int z = 0;

	//programa
	printf("Jokoaren taula honela gelditu da:\n");
	for (i = 0; i < LERROAK; i++){
		for (z = 0; z < ZUTABEAK; z++){
			if (matrizea[i][z] == 0){
				printf("| |  ");
			}
			if (matrizea[i][z] != 0){
				printf("|%c|  ", matrizea[i][z]);
			}
		}
		printf("\n");
	}
}