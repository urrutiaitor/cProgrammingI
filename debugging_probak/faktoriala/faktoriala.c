#include <stdio.h>

int main(){
	//aldagaiak
	int faktoriala = 1, i = 0, zenbakia = 0;

	//programa
	printf("Idatzi kalkulatu nahi duzun faktoriala:\n >");
	scanf("%i", &zenbakia);

	for (i = 1; i == zenbakia; i++){
		faktoriala = faktoriala * i;

	}
	printf("%i! = %i \n", zenbakia, faktoriala);

	//amaiera
	
	printf("sakatu enter...\n");
	fflush(stdin);
	getchar();
	return 0;
}