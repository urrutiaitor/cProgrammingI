#include <stdio.h>

int esaldia_jaso(char esaldia[100]);
void letra_larriz_jarri(char esaldia[100], int luzera);

int main(){
	//aldagaiak
	char esaldia[100];
	int luzera=0;

	//programa
	luzera = esaldia_jaso(esaldia);
	letra_larriz_jarri(esaldia, luzera);

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}

int esaldia_jaso(char esaldia[100]){
	//aldagaiak
	int luzera = 0, i = 0;
	
	//programa
	printf("Sartu nahi duzun esaldia:\n");
	fflush(stdin);
	gets(esaldia);

	for (i = 0; i < 100; i++){
		if (esaldia[i] == '\0'){
			luzera = i + 1;
		}
	}
	//return
	return luzera;
}

void letra_larriz_jarri(char esaldia[100], int luzera){
	//aldagaiak
	int i = 0;

	//programa
	for (i = 0; i < luzera; i++){
		if (i == 0){
			esaldia[i] = esaldia[i] - 32;
		}
		if (esaldia[i] == ' '){
			esaldia[i + 1] = esaldia[i + 1] - 32;
		}
	}

	for (i = 0; i < luzera; i++){
		printf("%c", esaldia[i]);

	}
	printf("\n");
}