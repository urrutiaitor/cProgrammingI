#include <stdio.h>

int menua();

int main(){
	//aldagaiak
	int aukera=0;

	//programa
	aukera = menua();
	printf("Hurrengoa aukeratu duzu: %i\n", aukera);

	//bukaera
	printf("Sakatu enter...\n");
	fflush(stdin);
	getchar();
	return 0;
}

int menua(){
	//aldagaiak
	int aukera = 0;
	
	//programa
	printf("****************************************\n");
	printf("1. Zenbaki baten digitu kopurua\n");
	printf("2. Zenbaki zatitzaileen kopurua\n");
	printf("3. Zenbaki baten zatitzaileak bistaratu\n");
	printf("4. Zenbaki bat perfektua al da?\n");
	printf("5. Zenbaki baten faktoriala\n");
	printf("6. 2. Mailako ekuazioa ebatzi\n");
	printf("0. Irten\n");
	printf("****************************************\n\n");
	printf("Zer nahi duzu egin?\n");
	scanf("%i", &aukera);
	return aukera;

	
	}