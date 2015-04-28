#include <stdio.h>
#include <string.h>
#include <math.h>

#define KORRIKALARIAK 100
#define INSKRIPZIOA 1

typedef struct korrikalaria{
	int dortsala;
	char izena[30];
	char abizena[30];
	int d_igerian;
	int d_bizikletan;
	int d_korrikan;
	int d_totala;
	
}KORRIKALARIA;

KORRIKALARIA datuak();
void lauKorrikalariGehitu(KORRIKALARIA korrik[], int kop);
void bistaratuKorrikalariBat(KORRIKALARIA korrik[],int posizioa);
KORRIKALARIA hasieratu();
KORRIKALARIA totala(KORRIKALARIA korrik[]);
void podium(KORRIKALARIA korrik[], int kop);
int azkarrenaAurkitu(KORRIKALARIA korrik[], int kop);
int bigarrenAzkarrenaAurkitu(KORRIKALARIA korrik[], int kop, int azkarrena);


int main(){
	//aldagaiak
	KORRIKALARIA korrik[KORRIKALARIAK];
	int i = 0;
	int segi = 1;
	int kop = 0;
	int posizioa = 0;

	//programa
	for (i = 0; i < KORRIKALARIAK; i++){
		korrik[i] = hasieratu();
	}
	while (segi == 1){
		printf("Zein posiziotik aurreta nahi dituzu sartu korrikalariren datuak?\n");
		scanf("%i", &kop);
		kop = kop - 1;
		lauKorrikalariGehitu(korrik, kop);
		printf("Beste %i korrikalariren datuak sartu nahi dituzu? BAI(1)/EZ(0)\n", INSKRIPZIOA);
		scanf("%i", &segi);
	}
	segi = 1;
	while (segi == 1){
		printf("Zein korrikalariren datuak nahi dituzu ikusi?\n");
		scanf("%i", &posizioa);
		posizioa = posizioa - 1;
		bistaratuKorrikalariBat(korrik, posizioa);
		printf("Beste korrikalariren baten datuak ikusi nahi dituzu? BAI(1)/EZ(0)\n");
		scanf("%i", &segi);
	}
	podium(korrik, kop);
	
	//bukaera
	printf("Sakatu ENTER bukatzeko");
	fflush(stdin);
	getchar();
	return 0;
}

KORRIKALARIA hasieratu(){
	//aldagaiak
	int i = 0;
	KORRIKALARIA korrik;

	//programa
	korrik.dortsala = 0;
	return korrik;
}

void lauKorrikalariGehitu(KORRIKALARIA korrik[], int kop){
	//aldagaiak
	int i = 0, batura = 0, kont = 0;

	//programa
	for (i = kop; i < KORRIKALARIAK; i++){
		batura = batura + korrik[i].dortsala;
	}
	if ((KORRIKALARIAK - INSKRIPZIOA) >= batura){
		i = kop;
		while (kont < INSKRIPZIOA){
			if (korrik[i].dortsala == 0){
				korrik[i] = datuak();
				kont++;
			}
			i++;
		}
	}
	else{
		printf("Ezin dira korrikalari gehiago sartu\n");
	}
}

KORRIKALARIA datuak(){
	//aldagaiak
	KORRIKALARIA korrik;

	//programa
	printf("Zein da zure dortsal zenbakia?\n");
	scanf("%i", &korrik.dortsala);
	printf("Zein da zure izena?\n");
	fflush(stdin);
	gets(korrik.izena);
	printf("Zein da zure abizena?\n");
	fflush(stdin);
	gets(korrik.abizena);
	printf("Zein da zure denbora igerian?\n");
	scanf("%i", &korrik.d_igerian);
	printf("Zein da zure denbora bizikletan?\n");
	scanf("%i", &korrik.d_bizikletan);
	printf("Zein da zure denbora korrikan?\n");
	scanf("%i", &korrik.d_korrikan);
	printf("Eskerrikasko parte hartzearren\n\n");

	//return
	return korrik;
}

void bistaratuKorrikalariBat(KORRIKALARIA korrik[], int posizioa){
	if (korrik[posizioa].dortsala != 0){
		printf("%i korrikalaria.\n", korrik[posizioa].dortsala);
		printf("%s %s da.\n", korrik[posizioa].izena, korrik[posizioa].abizena);
		printf("Igerian: %i\n", korrik[posizioa].d_igerian);
		printf("Bizikletan %i\n", korrik[posizioa].d_bizikletan);
		printf("Korrikan : %i\n", korrik[posizioa].d_korrikan);
	}
	else{
		printf("Ez dago korrikalaririk posizio horretan\n");
	}
}

KORRIKALARIA totala(KORRIKALARIA korrik[]){
	//aldagaiak
	int i = 0;

	//programa
	for (i = 0; i < KORRIKALARIAK; i++){
		korrik[i].d_totala = korrik[i].d_igerian + korrik[i].d_bizikletan + korrik[i].d_korrikan;
	}

}

void podium(KORRIKALARIA korrik[], int kop){
	//aldagaiak
	int azkarrena = 0;
	int bigarrenAzkarrena = 0;

	//programa
	azkarrena=azkarrenaAurkitu(korrik, kop);
	bigarrenAzkarrenaAurkitu(korrik, kop, azkarrena);

	printf("Korrikalari azkarrena hau izan da:\n");
	bistaratuKorrikalariBat(korrik, azkarrena);
	printf("Bigarren korrikalari azkarrena hau izan da:\n");
	bistaratuKorrikalariBat(korrik, bigarrenAzkarrena);

}

int azkarrenaAurkitu(KORRIKALARIA korrik[], int kop){
	//aldagaiak
	int i = 0;
	int azkarrena = 0;
	int kont = 0;

	//programa
	azkarrena = 0;
	for (i = 0; i < KORRIKALARIAK; i++){
		if ((korrik[i].dortsala != 0 )&& (kont == 0)){
			azkarrena = i;
			kont = 1;
		}
		if ((korrik[i].dortsala != 0)&&(korrik[i].d_totala<korrik[azkarrena].d_totala)){
			azkarrena = i;
		}
	}

	return azkarrena;
}

int bigarrenAzkarrenaAurkitu(KORRIKALARIA korrik[], int kop, int azkarrena){
	//aldagaiak
	int i = 0;
	int kont = 0;
	int bigarrenAzkarrena = 0;

	//programa
	bigarrenAzkarrena = 0;
	for (i = 0; i < KORRIKALARIAK; i++){
		if ((korrik[i].dortsala != 0)&& (kont == 0)&&(i!=azkarrena)){
			bigarrenAzkarrena = i;
			kont = 1;
		}
		if ((korrik[i].dortsala != 0)&&(korrik[i].d_totala < korrik[azkarrena].d_totala)&&(i != azkarrena)){
			bigarrenAzkarrena = i;
		}
	}

	return bigarrenAzkarrena;
}

