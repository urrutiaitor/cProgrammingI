#include <stdio.h>
#include <stdlib.h>

void arraya_sortu(char arraya[999]);
int arrayean_kontatu(char arraya[999], char letra);

int main(){
	//aldagaiak
	char letra = ' ';
	char arraya[999];
	int kopurua = 0;

	//programa
	arraya_sortu(arraya);
	kopurua=arrayean_kontatu(arraya, letra);
	printf("Karakterea %i aldiz dago arrayean\n", kopurua);

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}

void arraya_sortu(char arraya[999]){
	
	//aldagaiak
	int i = 0, zenb = 0, aux = 0;
	
	//programa
	srand(time(NULL));

	for (i = 0; i < 999; i++){

		aux = 65 + rand() %(91 - 65);
		arraya[i] = aux;

		zenb = arraya[i];
	}
	
	//return 
	return 0;
}


int arrayean_kontatu(char arraya[999], char letra){
	//aldagaiak
	int i = 0;
	char aux=' ';
	int kont = 0;

	//programa

	printf("Sartu kontatu nahi duzun letra mayuskulaz:\n>");
	scanf("%c", &letra);

	for (i = 0; i < 999; i++){
		aux = arraya[i];
		if (aux == letra){
			kont++;
		}
	}

	//return
	return kont;
}