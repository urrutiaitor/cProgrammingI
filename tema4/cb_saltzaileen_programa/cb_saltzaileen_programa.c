#include <stdio.h>
#include <string.h>
#include <math.h>

#define SALTZAILEAK 2
#define PRODUKTUAK 4

typedef struct produktua{
	int id;
	char deskripzioa[50]; //gets erabili hau betetzeko.
	int saldutakoKopurua;

}PRODUKTOA;

typedef struct saltzailea{
	char izena[30];
	char abizena[30];
	PRODUKTOA produktuak[PRODUKTUAK];
	int produktuTotala;
}SALTZAILEA;

SALTZAILEA saltzaileak[SALTZAILEAK];

int menua(SALTZAILEA saltzaileak[]);
void saltzaileak_hasieratu(SALTZAILEA saltzaileak[]);
void saltzailearen_salmentak_sartu(SALTZAILEA saltzaileak[]);
void saltzailearen_salmentak_ikusi(SALTZAILEA saltzaileak[]);
void salmenten_saltzaileak_bistaratu(SALTZAILEA saltzaileak[]);
void podiuma_bistaratu(SALTZAILEA saltzaileak[]);
void produktu_guztien_salmentak(SALTZAILEA saltzaileak[]);


int main(){
	//aldagaiak
	int segi = 1;
	int i = 0, t = 0;

	//programa
	for (i = 0; i < SALTZAILEAK; i++){
		for (t = 0; t < PRODUKTUAK; t++){
			saltzaileak[i].produktuak[t].id = t+1;
			saltzaileak[i].produktuak[t].saldutakoKopurua = 0;
		}
	}

	while (segi == 1){
		segi = menua(saltzaileak);
	}
	

	//bukaera
	return 0;
}

int menua(SALTZAILEA saltzaileak[]){
	//aldagaiak
	int segi = 1;
	int aukera = 0;

	//programa
	printf("0. Saltzaileak hasieratu\n");
	printf("1. Saltzaile baten produktu baten informazioa sartu (Izena eta produktu identifikadorea erabiliz)\n");
	printf("2. Saltzaile baten produktu bateko salmentak bistaratu (Izena erabiliz)\n");
	printf("3. Produktu baten Saltzaile guztien datuak bistaratu\n");
	printf("4. Saltzaileen podium bistaratu\n");
	printf("5. Produkto guztien salmentak bistaratu\n");
	printf("6. Irten\n");
	printf("Zer egin nahi duzu?\n");
	scanf("%i", &aukera);


	switch (aukera)	{
	case 0:
		saltzaileak_hasieratu(saltzaileak);
		break;
	case 1:
		saltzailearen_salmentak_sartu(saltzaileak);
		break;
	case 2:
		saltzailearen_salmentak_ikusi(saltzaileak);
		break;
	case 3:
		salmenten_saltzaileak_bistaratu(saltzaileak);
		break;
	case 4:
		podiuma_bistaratu(saltzaileak);
		break;
	case 5:
		produktu_guztien_salmentak(saltzaileak);
		break;
	case 6:
		segi = 0;
		break;
	default:
		break;
	}

	//return
	return segi;
}

void saltzaileak_hasieratu(SALTZAILEA saltzaileak[]){
	//aldagaiak
	int i = 0;

	//programa
	for (i = 0; i < SALTZAILEAK; i++){
		printf("Zein da %i. saltzailearen izena?\n", i + 1);
		fflush(stdin);
		gets(saltzaileak[i].izena);
		printf("Zein da %i. saltzailearen abizena?\n", i + 1);
		fflush(stdin);
		gets(saltzaileak[i].abizena);
		printf("\n");
	}
}

void saltzailearen_salmentak_sartu(SALTZAILEA saltzaileak[]){
	//aldagaiak
	int i = 0;
	int salmenta_bai = 0;
	int id = 0;

	//programa
	for (i = 0; i < SALTZAILEAK; i++){
		printf("%i. saltzaileak salmentaren bat egin du? BAI(1)/EZ(0)\n",i+1);
		scanf("%i", &salmenta_bai);
		while (salmenta_bai == 1){
			printf("Zein produktu saldu du %i. saltzaileak? Sartu produktuaren id-a\n", i + 1);
			scanf("%i", &id);
			id--;
			printf("Zenbat unitate saldu ditu produktu hortatik?\n");
			scanf("%i", &saltzaileak[i].produktuak[id].saldutakoKopurua);
			printf("Zelakoa da produktu hori? Sartu deskribapena\n");
			fflush(stdin);
			gets(saltzaileak[i].produktuak[id].deskripzioa);
			printf("%i. saltzaileak saldu ahal du beste produkturen bat? BAI(1)/EZ(0)\n", i + 1);
			fflush(stdin);
			scanf("%i", &salmenta_bai);
			printf("\n");
		}
	}
}

void saltzailearen_salmentak_ikusi(SALTZAILEA saltzaileak[]){
	//aldagaiak
	int saltzaile = 0;
	int i = 0;

	//programa
	printf("Zein saltzaileren salmenta nahi dituzu ikusi?\n");
	scanf("%i", &saltzaile);
	saltzaile--;
	printf("%s %s saltzaileak produktu hauek saldu ditu:\n", saltzaileak[saltzaile].izena, saltzaileak[saltzaile].abizena);
	for (i = 0; i < PRODUKTUAK;i++){
		if (saltzaileak[saltzaile].produktuak[i].saldutakoKopurua!=0){
			printf("- %s x %i\n", saltzaileak[saltzaile].produktuak[i].deskripzioa, saltzaileak[saltzaile].produktuak[i].saldutakoKopurua);
		}
	}

}

void salmenten_saltzaileak_bistaratu(SALTZAILEA saltzaileak[]){
	//aldagaiak
	int produktu = 0, i = 0;

	//programa
	printf("Zein produkturen salmenta nahi duzu ikusi?\n");
	scanf("%i", &produktu);
	produktu--;
	printf("Produktu hori saltzaile hauek saldu dute:\n");
	for (i = 0; i < SALTZAILEAK; i++){
		if (saltzaileak[i].produktuak[produktu].saldutakoKopurua != 0){
			printf("- %s %s %i kantitate\n", saltzaileak[i].izena, saltzaileak[i].abizena, saltzaileak[i].produktuak[produktu].saldutakoKopurua);
		}
	}
}

void podiuma_bistaratu(SALTZAILEA saltzaileak[]){
	//aldagaiak
	int i = 0, t = 0, onena = 0;

	//programa
	for (i = 0; i < SALTZAILEAK; i++){
		for (t = 0; t < PRODUKTUAK; t++){
			saltzaileak[i].produktuTotala = saltzaileak[i].produktuTotala + saltzaileak[i].produktuak[t].saldutakoKopurua;
		}
	}

	for (i = 0; i < SALTZAILEAK; i++){
		if (saltzaileak[i].produktuTotala>saltzaileak[onena].produktuTotala){
			onena = i;
		}
	}

	printf("Saltzaile onena %s %s izan da eta %i produktu saldu ditu\n", saltzaileak[onena].izena, saltzaileak[onena].abizena, saltzaileak[onena].produktuTotala);
}

void produktu_guztien_salmentak(SALTZAILEA saltzaileak[]){
	//aldagaiak
	int kopuruTotala[PRODUKTUAK], i = 0, t = 0;

	//programa	
	for (i = 0; i < PRODUKTUAK; i++){
		kopuruTotala[i] = 0;
	}

	printf("produktu bakoitzaren salmenta kopurua hau izan da:\n");
	for (i = 0; i < PRODUKTUAK; i++){
		for (t = 0; t < SALTZAILEAK; t++){
			kopuruTotala[i] = kopuruTotala[i] + saltzaileak[t].produktuak[i].saldutakoKopurua;
		}
		printf("%i. produktuaren %i ale saldu dira\n", i, kopuruTotala[i]);
	}
}
