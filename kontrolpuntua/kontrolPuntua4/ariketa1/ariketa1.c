#include <stdio.h>
#include <string.h>
#include <math.h>

//define hau aldatzen asteko zenbat egunetan egon ahal den irekita modifikatu ahal da.
#define EGUNAK 7
//define hau aldatzen zenbat gela egon ahal diren modifikatu ahal da.
#define GELAK 2
//define hau aldatzen egunean zenbat ordu irekita egongo den modifikatu ahal da.
#define ORDUAK 12

typedef struct ordukoa{
	int okupazioa;
	int ordua;
	char izena[20];
	char abizena[20];
	char emaila[70];

}ORDUKOA;

typedef struct ordutegia{
	ORDUKOA ordukoak[ORDUAK];

}ORDUTEGIA;

typedef struct gela{
	int identifikadorea;
	char deskribapena[100];
	ORDUTEGIA egunak[EGUNAK];
}GELA;

void hasieratu(GELA gelak[]);
void erreserbaEgin(GELA gelak[]);
void erreserbakBistaratu(GELA gelak[]);
void erreserbakBistaratuAstekoak(GELA gelak[]);
void erreserbaModifikatu(GELA gelak[]);

int main(){
	//aldagaiak
	GELA gelak[GELAK];
	ORDUKOA ordukoak[ORDUAK];
	int i = 0, segi = 1;

	//programa
	hasieratu(gelak);
	

	while (segi == 1){
		erreserbaEgin(gelak);
		printf("Erreserba gehiago egin nahi dituzu? BAI(1)/EZ(0)\n");
		scanf("%i", &segi);
	}
	erreserbakBistaratu(gelak);
	erreserbakBistaratuAstekoak(gelak);

	segi = 1;
	while (segi == 1){
		erreserbaModifikatu(gelak);
		printf("Erreserba gehiago modifikatu nahi dituzu? BAI(1)/EZ(0)\n");
		scanf("%i", &segi);
	}
	erreserbakBistaratu(gelak);
	erreserbakBistaratuAstekoak(gelak);

	//bukaera
	return 0;
}

void hasieratu(GELA gelak[]){
	//aldagaiak
	int i = 0, t = 0, w = 0;

	//programa
	
	
	for (w = 0; w < GELAK; w++){
		gelak[w].identifikadorea = w;
		for (i = 0; i < EGUNAK; i++){
			for (t = 0; t < ORDUAK; t++){
				gelak[w].egunak[i].ordukoak[t].okupazioa = 0;
				gelak[w].egunak[i].ordukoak[t].ordua = t+9;

			}
		}
	}
}

void erreserbaEgin(GELA gelak[]){
	//aldagaiak
	int i = 0, astekoEguna = 0, gelaZenbakia = 0, erreserbatzekoOrdua;

	//programa
	printf("Zenbatgarren gela nahi duzu erreserbatu?\n");
	scanf("%i", &gelaZenbakia);
	gelaZenbakia = gelaZenbakia - 1;
	printf("Asteko zein egunetan nahi duzu egin erreserba?\n");
	printf("ASTELEHENA(0);ASTEARTEA(1);AZTEAZKENA(2);OSTEGUNA(3);OSTIRALA(4);LARUNBATA(5);IGANDEA(6)\n");
	scanf("%i", &astekoEguna);
	printf("Egun hortan ordu hauek dituzu libre:\n");
	for (i = 0; i < ORDUAK; i++){
		if (gelak[gelaZenbakia].egunak[astekoEguna].ordukoak[i].okupazioa == 0){
			printf(">%i. orduan\n", gelak[gelaZenbakia].egunak[astekoEguna].ordukoak[i].ordua);
		}
	}

	printf("Zein ordutan nahi duzu hartu gela hori?(Sartu orduaren zenbakia)\n");
	scanf("%i", &erreserbatzekoOrdua);
	erreserbatzekoOrdua = erreserbatzekoOrdua - 9;

	if (gelak[gelaZenbakia].egunak[astekoEguna].ordukoak[erreserbatzekoOrdua].okupazioa == 0){
		gelak[gelaZenbakia].egunak[astekoEguna].ordukoak[erreserbatzekoOrdua].okupazioa = 1;
		printf("Zein da zure izena?\n");
		fflush(stdin);
		gets(gelak[gelaZenbakia].egunak[astekoEguna].ordukoak[erreserbatzekoOrdua].izena);
		printf("Zein da zure abizena?\n");
		fflush(stdin);
		gets(gelak[gelaZenbakia].egunak[astekoEguna].ordukoak[erreserbatzekoOrdua].abizena);
		printf("Zein da zure emaila?\n");
		fflush(stdin);
		gets(gelak[gelaZenbakia].egunak[astekoEguna].ordukoak[erreserbatzekoOrdua].emaila);
		printf("Gelaren erreserbazioa egokia izan da\n\n");

	}
	else{
		printf("Ordu hori ezin da aukeratu\n");
	}
}

void erreserbakBistaratu(GELA gelak[]){
	//aldagaiak
	int gelakoErreserbak = 0;
	int i = 0, t = 0, w = 0;

	//programa
	printf("Zein gelaren erreserbak nahi dituzu bistaratu?(Egun bateko erreserbak)\n");
	scanf("%i", &gelakoErreserbak);
	gelakoErreserbak = gelakoErreserbak - 1;
	printf("Zein egunetako erreserbak nahi dituzu bistaratu?\n");
	printf("ASTELEHENA(0);ASTEARTEA(1);AZTEAZKENA(2);OSTEGUNA(3);OSTIRALA(4);LARUNBATA(5);IGANDEA(6)\n");
	scanf("%i", &i);

	printf("Asteko %i. egunean erreserba hauek daude:\n", i + 1);
	for (t = 0; t < ORDUAK; t++){
		if (gelak[gelakoErreserbak].egunak[i].ordukoak[t].okupazioa == 1){
			printf(">%s %s, %s, %i:00etatik-%i:00etara\n", gelak[gelakoErreserbak].egunak[i].ordukoak[t].izena, gelak[gelakoErreserbak].egunak[i].ordukoak[t].abizena, gelak[gelakoErreserbak].egunak[i].ordukoak[t].emaila, gelak[gelakoErreserbak].egunak[i].ordukoak[t].ordua, gelak[gelakoErreserbak].egunak[i].ordukoak[t].ordua + 1);
		}
	}
	printf("\n");


}

void erreserbakBistaratuAstekoak(GELA gelak[]){
	//aldagaiak
	int gelakoErreserbak = 0;
	int i = 0, t = 0, w = 0;

	//programa
	printf("Zein gelaren erreserbak nahi dituzu bistaratu?(Aste osoko erreserbak)\n");
	scanf("%i", &gelakoErreserbak);
	gelakoErreserbak = gelakoErreserbak - 1;

	for (i = 0; i < EGUNAK; i++){
		printf("Asteko %i. egunean erreserba hauek daude:\n", i + 1);
		for (t = 0; t < ORDUAK; t++){
			if (gelak[gelakoErreserbak].egunak[i].ordukoak[t].okupazioa == 1){
				printf(">%s %s, %s, %i:00etatik-%i:00etara\n", gelak[gelakoErreserbak].egunak[i].ordukoak[t].izena, gelak[gelakoErreserbak].egunak[i].ordukoak[t].abizena, gelak[gelakoErreserbak].egunak[i].ordukoak[t].emaila, gelak[gelakoErreserbak].egunak[i].ordukoak[t].ordua, gelak[gelakoErreserbak].egunak[i].ordukoak[t].ordua + 1);
			}
		}
		printf("\n");
	}
	printf("\n");

}

void erreserbaModifikatu(GELA gelak[]){
	//aldagaiak
	int gelakoErreserbak, egunekoErreserbak, ordukoErreserbak = 0;

	//programa
	printf("Zein gelaren erreserbak nahi dituzu modifikatu?\n");
	scanf("%i", &gelakoErreserbak);
	gelakoErreserbak = gelakoErreserbak - 1;
	printf("Zein egunetako erreserbak nahi dituzu modifikatu?\n");
	printf("ASTELEHENA(0);ASTEARTEA(1);AZTEAZKENA(2);OSTEGUNA(3);OSTIRALA(4);LARUNBATA(5);IGANDEA(6)\n");
	scanf("%i", &egunekoErreserbak);
	printf("Zein ordutako erreserbak nahi dituzu modifikatu?(Sartu hasierako orduaren zenbakia\n");
	scanf("%i", &ordukoErreserbak);

	ordukoErreserbak = ordukoErreserbak - 9;

	printf("Zein da zure izena?\n");
	fflush(stdin);
	gets(gelak[gelakoErreserbak].egunak[egunekoErreserbak].ordukoak[ordukoErreserbak].izena);
	printf("Zein da zure abizena?\n");
	fflush(stdin);
	gets(gelak[gelakoErreserbak].egunak[egunekoErreserbak].ordukoak[ordukoErreserbak].abizena);
	printf("Zein da zure emaila?\n");
	fflush(stdin);
	gets(gelak[gelakoErreserbak].egunak[egunekoErreserbak].ordukoak[ordukoErreserbak].emaila);
	printf("Gelaren erreserbazio aldaketa egokia izan da\n\n");
	
}