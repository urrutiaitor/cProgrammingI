#include <stdio.h>

int hitzKopurua(char esaldia[31], int karaktereak);
int str_luzeera(char esaldia[31]);

int main(){
	//aldagaiak
	int karaktereak = 0, hitzak = 0;
	char esaldia[31];

	//programa
	karaktereak = str_luzeera(esaldia);
	hitzak = hitzKopurua(esaldia,karaktereak);
	printf("%i hitz ditu esaldiak\n", hitzak);

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;

}

int hitzKopurua(char esaldia[31], int karaktereak){
	//aldagaiak
	int hitzak = 1, i = 0;

	//programam
	while (i < karaktereak){
		if (esaldia[i] == ' '){
			hitzak++;
		}
		i++;
	}

	//return
	return hitzak;
	
}

int str_luzeera(char esaldia[31]){
	//aldagaiak
	int karaktereak = 0, i = 0;

	//programa
	printf("Sartu esaldi bat 30 karaktere baino gutxiagokoa\n");
	gets(esaldia);

	while ((esaldia[i] != '\0') && (i < 31)){
		i++;
	}

	//return
	return i;
}