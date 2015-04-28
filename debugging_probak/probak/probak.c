#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct data{
	int urtea;
	int hilea;
	int eguna;

}DATA;

typedef struct ikasgaia{
	char ikasgaiarenIzena[30];
	int kalifikazioa;
	int id;

}IKASGAIA;

typedef struct ikaslea{
	char izena[20];
	char abizena[20];
	int identifikadorea;
	DATA jaiotzeData;
	IKASGAIA ikasgaiak[10];

}IKASLEA;

typedef struct GELA{
	char maila[30];
	int ikasleKopurua;
	IKASLEA ikasleak[30];
	IKASLEA tutorea;
	int gela;

}GELA;

typedef struct eskola{
	char izena[20];
	char helbidea[40];
	GELA gelak[30];
	int gelaKopurua;
}ESKOLA;


GELA gelakHasieratu(GELA gelak);
ESKOLA eskolakHasieratu(ESKOLA eskolak);

GELA notakSartu(GELA gela);
void ikaslearenBatezBestekoa(IKASLEA ikaslea);
void gelarenBatezBestekoa(GELA gela);
void batezBestekoHoberenaBistaratu(GELA gela);
void batezBestekoarenAraberaBistaratu(GELA gela);


int main(){
	//aldagaiak
	ESKOLA eskolak[2];
	int aukera = 0;

	//programa
	eskolak[0] = eskolakHasieratu(eskolak[0]);


	do{
		printf("Zer nahi duzu egin?\n");
		printf("1. Gela bateko ikasleei ikasgai baten notak sartu\n");
		printf("2. Ikasle baten noten batez bestekoa kalkulatu\n");
		printf("3. Gela bateko batez bestekoa\n");
		printf("4. Gela bateko batez besteko hoberena duena aurkitu\n");
		printf("5. Ikasleak batez bestekoaren arabera bistaratu\n");
		printf("0. Irten");
		scanf("%i", &aukera);

		switch (aukera){
		case 1:

			break;

		case 2:

			break;

		case 3:

			break;

		case 4:

			break;

		case 5:

			break;

		}

	} while (aukera != 0);

	//bukaera
	printf("Sakatu INTRO bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}

ESKOLA eskolakHasieratu(ESKOLA eskolak){
	//aldagaiak
	int i = 0, t = 0;

	//programa
	for (i = 0; i < 30; i++){
		for (t = 0; t < 30; t++){
			eskolak.gelak[i].ikasleak[t].identifikadorea = 0;
		}
	}

	//return
	return eskolak;
}

GELA notakSartu(GELA gela){
	//aldagaiak
	int segi = 0;
	int ikasle = 0;
	int ikasgai = 0;

	//programa
	do{
		printf("Zenbatgarren ikaslearen nota nahi duzu sartu?\n");
		scanf("%i", &ikasle);

		printf("Zenbatgarren ikasgaiean?\n");
		scanf("%i", &ikasgai);

		printf("Zein da nota?\n");
		scanf("%i", gela.ikasleak[ikasle - 1].ikasgaiak[ikasgai - 1].kalifikazioa);

		printf("Nota ondo sartu da\n");

		printf("Beste nota bat sartu nahi duzu? BAI(1)/EZ(0)\n");
		scanf("%i", &segi);
	} while (segi == 1);

	//bukaera
	return gela;
}

void ikaslearenBatezBestekoa(IKASLEA ikaslea){

}

void gelarenBatezBestekoa(GELA gela){

}

void batezBestekoHoberenaBistaratu(GELA gela){

}

void batezBestekoarenAraberaBistaratu(GELA gela){

}

