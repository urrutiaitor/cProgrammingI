#include <stdio.h>
#define MAX 25

int notak_jaso(float notak[]);
void noten_media(float notak[], int ikasleak);
int gaindituen_kopurua(float notak[], int ikasleak);
void gainditu_dutenak(float notak[], int ikasleak);
void notak_zerora(float notak[]);

int main(){
	//aldagaiak
	float notak[MAX],media=0;
	int gainditukopurua = 0, ikasleak = 0;

	//programa
	notak_zerora(notak);
	ikasleak = notak_jaso(notak);
	printf("\n");
	noten_media(notak, ikasleak);
	printf("\n");
	gainditukopurua = gaindituen_kopurua(notak, ikasleak);
	printf("\n");
	gainditu_dutenak(notak, ikasleak);

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}

int notak_jaso(float notak[]){
	//aldagaiak
	int ikasleak=0,i=0;

	//programa
	for (i = 0; i < MAX; i++){
		printf("Zein da %i. ikaslearen nota?\n>", i + 1);
		scanf("%f", &notak[i]);
		ikasleak++;
	}


	//amaiera
	return ikasleak;
}

void noten_media(float notak[], int ikasleak){
	//aldagaiak
	int i = 0;
	float batura = 0,media=0;

	//programa
	for (i = 0; i < ikasleak; i++){
		batura = batura + notak[i];
	}
	media = batura / ikasleak;

	printf("Media %.2f koa da\n",media);


	//amaiera
	return 0;

}

int gaindituen_kopurua(float notak[], int ikasleak){
	//aldagaiak
	int i = 0,gaindituak=0;
	float batura = 0, media = 0;

	//programa
	for (i = 0; i < ikasleak; i++){
		if (notak[i] >= 5){
			gaindituak++;
		}
	}
	printf("%i ikaslek gainditu dute\n", gaindituak);


	//amaiera
	return gaindituak;

}

void gainditu_dutenak(float notak[], int ikasleak){
	//aldagaiak
	int i = 0;

	//programa
	printf("Hurrengo ikasleak gainditu dute testa:\n");
	for (i = 0; i < ikasleak; i++){
		if (notak[i] >= 5){
			printf(">%i\n", i+1);
		}
	}


	//amaiera
	return 0;

}

void notak_zerora(float notak[]){
	//aldagaiak
	int i = 0;

	//programa
	for (i = 0; i < MAX; i++){
		notak[i] = 0;
	}

	//bukaera
	return 0;
}