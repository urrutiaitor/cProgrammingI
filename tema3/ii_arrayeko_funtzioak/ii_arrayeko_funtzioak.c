#include <stdio.h>

int menua(int arraya[20]);
void arraya_zerora(int arraya[20]);
void zenbakia_sartu(int arraya[20]);
void zenbakia_ezabatu(int arraya[20]);
void arraya_bistaratu(int arraya[20]);
void arrayko_elementuak(int arraya[20]);

int main(){
	//aldagaiak
	int arraya[20];
	int jarraitu = 1;

	//programa
	arraya_zerora(arraya);
	while (jarraitu != 0){
		jarraitu = menua(arraya);
	}

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}

int menua(int arraya[20]){
	
	//aldagaiak
	int jarraitu = 1;

	//programa
	printf("Zer egin nahi duzu?\n");
	printf("0. Irten\n");
	printf("1. Arraiko posizio baten zenbaki berri bat sartu\n");
	printf("2. Arraiko posizio bateko elementua ezabatu\n");
	printf("3. Array bistaratu\n");
	printf("4. Arraiko elementu kopurua bistaratu\n");
	scanf("%i", &jarraitu);
	
	switch (jarraitu){
	case 1:
		zenbakia_sartu(arraya);
		break;

	case 2:
		zenbakia_ezabatu(arraya);
		break;

	case 3:
		arraya_bistaratu(arraya);
		break;

	case 4:
		arrayko_elementuak(arraya);
		break;
	}
	//return
	return jarraitu;
	
}

void arraya_zerora(int arraya[20]){
	//aldagaiak
	int i = 0;

	//programa
	for (i = 0; i < 20; i++){
		arraya[i] = 0;
	}
}

void zenbakia_sartu(int arraya[20]){
	//aldagaiak
	int posizioa = 0;

	//programa
	printf("Zein lekuko zenbakia nahi duzu aldatu?");
	scanf("%i", &posizioa);
	posizioa = posizioa - 1;

	printf("Posizio hortan %i balorea dago, zein nahi duzu sartu?", arraya[posizioa]);
	scanf("%i", &arraya[posizioa]);
	printf("Aldaketa osatuta");
}

void zenbakia_ezabatu(int arraya[20]){
	//aldagaiak
	int posizioa = 0;

	//programa
	printf("Zein posizioko zenbakia ezabatu nahi duzu?");
	scanf("%i",&posizioa);
	printf("%i balorea dago posizioa horretan eta borratu egingo da\n", arraya[posizioa-1]);
	printf("Kargatzen...\n");
	arraya[posizioa - 1] = 0;
	printf("Ezabatuta\n");
}

void arraya_bistaratu(int arraya[20]){
	//aldagaiak
	int i = 0;

	//programa
	printf("Arrayko baloreak hauek dira:\n");
	for (i = 0; i < 20; i++){
		if (arraya[20] != 0){
			printf("%i ", arraya[i]);
		}
	}
}

void arrayko_elementuak(int arraya[20]){
	//aldagaiak
	int i = 0, kopurua = 0;

	//programa
	printf("Arrayko balore kopurua hau da:\n");
	for (i = 0; i < 20; i++){
		if (arraya[20] != 0){
			kopurua++;
		}
	}
}