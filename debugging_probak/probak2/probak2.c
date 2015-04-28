#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PERTSONAK 6

typedef struct oparia{
	char oparia[50];
	char deskripzioa[200];

}OPARIA;

typedef struct pertsona{
	int id;
	char izena[50];
	OPARIA opariak[10];
	int opariKop;

}PERTSONA;

int main(){
	//aldagaiak
	int i = 0;
	int t = 0;
	int kont = 0;
	int segi = 1;
	int pertsona = 0;
	int tonto = 0;
	PERTSONA pertsonak[PERTSONAK];

	//programa
	for (i = 0; i < PERTSONAK; i++){
		pertsonak[i].id = i;
	}
	for (i = 0; i < PERTSONAK; i++){
		printf("Zein da zure izena?\n");
		fflush(stdin);
		gets(pertsonak[i].izena);
		
		pertsonak[i].opariKop = 0;
		while ((pertsonak[i].opariKop <10)&&(segi==1)){
			printf("Zein da nahi duzun oparia?\n");
			fflush(stdin);
			gets(pertsonak[i].opariak[kont].oparia);
			printf("Zein da nahi duzun opariaren deskripzioa?\n");
			fflush(stdin);
			gets(pertsonak[i].opariak[kont].deskripzioa);
			printf("Beste opari bat nahi duzu? BAI(1)/EZ(0)\n");
			scanf("%i", &segi);
			pertsonak[i].opariKop++;
		}
		system("cls");
	}

	for (i = 0; i < PERTSONAK; i++){
		if ((i>=0)&&(i<4)){
			pertsona = i+2;
		}
		if (i>=4){
			pertsona = i - PERTSONAK + 2;
		}
		printf("Zu zara %s? BAI()/EZ()", pertsonak[i].izena);
		scanf("%i", &tonto);
		if (tonto == 1){
			printf("Zuk oparia egingo diozu %i. pertsonari:\n", pertsona);
			printf("%s\n", pertsonak[pertsona].izena);

			printf("Bere opariak hauek dira:\n");
			for (t = 0; t < pertsonak[i].opariKop; t++){
				printf(">%s", pertsonak[i].opariak[t].oparia);
				printf(">%s", pertsonak[i].opariak[t].deskripzioa);
			}
			system("cls");
		}
	}
	

	//Bukaera
	printf("sakatu enter...\n");
	fflush(stdin);
	getchar();
	return 0;
}