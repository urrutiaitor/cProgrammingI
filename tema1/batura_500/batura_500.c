#include <stdio.h>

int main(){

	//aldagaiak
	int z = 0;
	int b = 0;

	//programa

	for (z = 0; b <= 500; z++){
		b = b + z;
	}
	printf("Lehenengo %i zenbakiren batura behar da\n", z);

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}