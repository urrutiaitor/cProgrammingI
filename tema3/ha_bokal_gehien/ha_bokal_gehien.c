#include <stdio.h>

int esaldia_sortu(char esaldia[100]);
int esaldia_irakurri(char esaldia[100],int luzera);
void hitza_printatu(char esaldia[100],int luzera, int gehien);

int main(){
	//aldagaiak
	char esaldia[100];
	int luzera = 0;
	int gehien = 0;

	//programa
	luzera = esaldia_sortu(esaldia);
	gehien=esaldia_irakurri(esaldia,luzera);
	hitza_printatu(esaldia,luzera,gehien);

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}

int esaldia_sortu(char esaldia[100]){
	//aldagaiak
	int kont = 0;
	char esaldi[100];

	//programa
	printf("Sartu nahi duzun esaldia:\n");
	fflush(stdin);
	gets(esaldi);

	while ((kont < 100)&&(esaldi[kont]!='\0' )){
		esaldia[kont] = esaldi[kont];
		kont++;
	}
	esaldia[kont] = '\0';
	kont = kont;

	//return
	return kont;
}

int esaldia_irakurri(char esaldia[100], int luzera){
	//aldagaiak
	int i = 0;
	int bokalak[20];
	int hitzak = 0;
	int gehien = 0;

	//programa
	for (i = 0; i < luzera; i++){
		if ((esaldia[i] == 'a') || (esaldia[i] == 'e') || (esaldia[i] == 'i') || (esaldia[i] == 'o') || (esaldia[i] == 'u')){
			bokalak[hitzak]++;
		}
		if (esaldia[i] == ' '){
			hitzak++;
		}
	}
	i = 0;
	gehien = bokalak[i];
	while (i < hitzak){
		if (gehien < bokalak[i]){
			gehien = bokalak[i];
		}
	}


	//bukaera
	return gehien;
}

void hitza_printatu(char esaldia[100], int luzera, int gehien){
	//aldagaiak
	int i = 0;
	int espazioak = 0;
	//programa
	printf("Bokal gehien duen hitza honako hau da:\n");
	while (espazioak != gehien){
		if (esaldia[i] == ' '){
			espazioak++;
		}
		i++;
	}
	while (espazioak == gehien){
		if (esaldia[i] != ' '){
			printf("%c", esaldia[i]);
		}
		if (esaldia[i] == ' '){
			espazioak++;
		}
		i++;

	}
	printf("\n");

	//bukaera
	return 0;
}