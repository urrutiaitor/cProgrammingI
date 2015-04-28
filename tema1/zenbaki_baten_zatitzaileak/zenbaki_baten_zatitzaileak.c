#include <stdio.h>

int main(){

	//aldagaiak
	int h = 0;
	int z = 0;
	int i = 0;

	//programa

	printf("Sartu zenbakia\n >");
	scanf("%i", &z);

	for (i = 1; i <= (z / 2); i++){
		h = z % i;
		if (h == 0){
			printf("-%i\n", i);
		}
	}

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}