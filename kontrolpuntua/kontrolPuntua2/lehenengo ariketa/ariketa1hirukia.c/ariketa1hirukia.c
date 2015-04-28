#include <stdio.h>

int main(){
	//aldagaiak
	int asteriskoak = 1, espazioak = 0, t = 0, i = 0, n=0;

	//programa
	printf("Sartu altuera zenbakia");
	scanf("%i", &n);

	for (i = 1; i <= n; i++){//altuera
		espazioak = n - 1;

		for (t = 1; t < espazioak;t++){
			printf(" ");
		}
		
		for (t = 1; t <= asteriskoak; t++){
			printf("*");
		}
		asteriskoak = asteriskoak + 2;
		printf("\n");

	}

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}

//ez du hasierako espazioak inprimatzen