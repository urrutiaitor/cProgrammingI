#include <stdio.h>

int main(){

	//aldagaiak
	int ordu = 0;
	int minutu = 0; 
	int segundu = 0;
	int segundusobera = 0;
	int minutusobera = 0;
	int ordusobera = 0;
	int segundufinala = 0;
	int minutufinala = 0;
	int ordufinala = 0;

	//programa

	printf("Zenbat dira orduak?");
	scanf("%i", &ordu);
	printf("Zenbat dira minutuak?");
	scanf("%i", &minutu);
	printf("Zenbat dira segunduak?");
	scanf("%i", &segundu);
	
	segundusobera = segundu/60;
	minutusobera = minutu/60;
	segundufinala = segundu%60;
	minutufinala = segundusobera + minutu%60;
	ordufinala = minutusobera + ordu;

	printf("%i ordu, %i minutu eta %i segundu\n",ordufinala,minutufinala,segundufinala);

	//amaiera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;

}