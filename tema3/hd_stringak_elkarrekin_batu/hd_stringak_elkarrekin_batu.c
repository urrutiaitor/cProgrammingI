#include <stdio.h>

int stringa_sortu(char string[60]);
void biak_batu(char string1[60], char string2[60], char string[60], int string1_luzera, int string2_luzera);
void lehenengoan_bigarrena_batu(char string1[60], char string2[60], int string1_luzera, int string2_luzera);

int main(){
	//aldagaiak
	char string1[60], string2[30], string[60];
	int string1_luzera = 0, string2_luzera = 0;

	//programa
	string1_luzera = stringa_sortu(string1);
	string2_luzera = stringa_sortu(string2);

	biak_batu(string1, string2, string, string1_luzera, string2_luzera);

	lehenengoan_bigarrena_batu(string1, string2, string1_luzera, string2_luzera);

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}

int stringa_sortu(char string[60]){
	//aldagaiak
	int luzera = 0;
	int i = 0;

	//programa
	printf("Zenbat karaktere ditu hitzak?\n");
	scanf("%i", &luzera);
	printf("Sartu nahi duzun hitza:\n");
	fflush(stdin);
	gets(string);

	//return
	return luzera;
}

void biak_batu(char string1[60], char string2[60], char string[60], int string1_luzera, int string2_luzera){
	//aldagaiak
	int i = 0;

	//programa
	for (i = 0; i < (string1_luzera + string2_luzera); i++){
		if (i < string1_luzera){
			string[i] = string1[i];
		}
		if (i >= string1_luzera){
			string[i] = string2[i - string1_luzera];
		}
	}
	
	for (i = 0; i < (string1_luzera + string2_luzera); i++){
		printf("%c", string[i]);
	}
	printf("\n");
}

void lehenengoan_bigarrena_batu(char string1[60], char string2[60], int string1_luzera, int string2_luzera){
	//aldagaiak
	int i = 0;

	//programa
	for (i = 0; i < (string1_luzera + string2_luzera); i++){
		if (i >= string1_luzera){
			string1[i] = string2[i - string1_luzera];
		}
	}

	for (i = 0; i < (string1_luzera + string2_luzera); i++){
		printf("%c", string1[i]);
	}
	printf("\n");
}