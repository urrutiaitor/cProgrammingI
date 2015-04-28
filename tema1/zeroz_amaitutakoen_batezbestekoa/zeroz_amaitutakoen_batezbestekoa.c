#include <stdio.h>

int main(){

	//aldagaiak
	int z = 1;
	float b = 0;
	int k = 0;
	float e = 0;

	//programa

	while (z!=0){
		printf("Sartu zenbaki bat\n >");
		scanf("%i", &z);
		k++;
		b = b + z;
	}

	e = b / k;
	printf("%f da zenbakien batezbestekoa\n", e);

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}