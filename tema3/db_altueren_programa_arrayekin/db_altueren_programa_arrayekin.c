#include <stdio.h>
#define MAX 30

int altuerak_irakurri(float altuerak[MAX]);
int media(float altuerak[MAX], int kantitatea);
void handiena(float altuerak[MAX], int kantitatea);
void txikiena(float altuerak[MAX], int kantitatea);
void mediarekikoposizioa(float media, float altuerak[MAX], int kantitatea);
void altuerak_zerora(float altuerak[MAX],int kantitatea);
void altuerakerakutzi(float altuerak[MAX], int kantitatea);

int main(){
	//aldagaiak
	float altuerak[MAX],med=0;
	int kantitatea = 0, i = 0, segi = 1;

	//programa
	while (segi == 1){
		altuerak_zerora(altuerak, kantitatea);
		kantitatea = altuerak_irakurri(altuerak,kantitatea);
		med=media(altuerak, kantitatea);
		handiena(altuerak, kantitatea);
		txikiena(altuerak, kantitatea);
		mediarekikoposizioa(med, altuerak, kantitatea);
		altuerakerakutzi(altuerak, kantitatea);
		
		printf("Berriro hasi nahi duzu? BAI(1)/EZ(0)\n");
		scanf("%i", &segi);
	}


	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;

}

int altuerak_irakurri(float altuerak[MAX]){
	//aldagaiak
	int i = 0, kantitatea = 0;

	//programa
	for (i = 0; i < MAX; i++){
		printf("%i. altuera?\n>", i+1);
		scanf("%f", &altuerak[i]);
		kantitatea++;
		if (altuerak[i] == 0){
			i = 30;
			kantitatea--;
		}
	}

	//amaiera
	return kantitatea;
}

int media(float altuerak[MAX], int kantitatea){
	//aldagaiak
	int i = 0;
	float batura = 0, media = 0;

	//programa
	for (i = 0; i < kantitatea; i++){
		batura = batura + altuerak[i];
	}
	media = batura / kantitatea;
	printf("Media %.2f ekoa da\n", media);

	//amaiera
	return media;
}

void handiena(float altuerak[MAX], int kantitatea){
	//aldagaiak
	int i = 0;
	float alt = 0, handiena = 0;

	//programa
	handiena = altuerak[i];
	for (i = 0; i < kantitatea; i++){
		alt = altuerak[i];
		if (handiena < alt){
			handiena = alt;
		}
	}
	printf("Handiena %.2f da\n", handiena);

	//amaiera
	return 0;
}

void txikiena(float altuerak[MAX], int kantitatea){
	//aldagaiak
	int i = 0;
	float alt = 0, txikiena = 0;

	//programa
	txikiena = altuerak[i];
	for (i = 1; i <= kantitatea; i++){
		alt = altuerak[i];
		if (txikiena > alt){
			txikiena = alt;
		}
	}

	printf("Txikiena %.2f da\n", txikiena);

	//amaiera
	return 0;

}

void mediarekikoposizioa(float media, float altuerak[MAX], int kantitatea){
	//aldagaiak
	int i = 0;

	//programa
	for (i = 1; i <= kantitatea; i++){
		if (altuerak[i] < media){
			printf("%i. altuera %.2f da eta media baino txikiagoa da\n", i, altuerak[i]);
		}
		if (altuerak[i] == media){
			printf("%i. altuera %.2f da eta mediaren berdina da\n", i, altuerak[i]);
		}
		if (altuerak[i] > media){
			printf("%i. altuera %.2f da eta media baino handiagoa da\n", i, altuerak[i]);
		}
	}

	//amaiera
	return 0;

}

void altuerak_zerora(float altuerak[MAX],int kantitatea){
	//aldagaiak
	int i = 0;

	//programa
	for (i = 0; i < kantitatea; i++){
		altuerak[i] = 0;
	}

	//amaiera
	return 0;
	
}

void altuerakerakutzi(float altuerak[MAX], int kantitatea){
	//aldagaiak
	int i = 0;

	//programa
	for (i = 1; i <= kantitatea; i++){
		printf("%i. altuera %.2f da\n", i, altuerak[i]);
	}

	//amaiera
	return 0;
}