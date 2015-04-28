
#include <stdio.h>

int main(){

	//aldagaiak
	float celciusgraduak = 0, farenheitgraduak = 0;

	//programa
	printf("Zenbat gradu Celcius daude?");
	scanf("%i", &celciusgraduak);
	farenheitgraduak = (((celciusgraduak * 9) / 5 ) + 32);
	printf("%i gradu Farenheit daude\n", farenheitgraduak);

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;

}