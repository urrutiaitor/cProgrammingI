#include <stdio.h>

int main(){

	//aldagaiak
	float euroak = 0;
	float dolarrak = 0;

	//programa
	printf ("Zenbat diru duzu eurotan?");
	scanf ("%f",&euroak);
	dolarrak = (euroak * 1.3546);
	printf("%f dolar dituzu\n", dolarrak);

	//bukaera
	printf("Sakatu tekla bat programa bukatzeko...\n");
	fflush(stdin);
	getchar();
	return (0);
}