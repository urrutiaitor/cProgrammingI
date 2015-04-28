#include <stdio.h>

int main(){

	//aldagaiak
	int z = 0;
	int k = 1;

	//programa

	printf("Sartu zenbakia\n >");
	scanf("%i", &z);

	while(z>=10) {
		z = z / 10;
		k++;
	}
	printf("%i digito ditu\n", k);

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}