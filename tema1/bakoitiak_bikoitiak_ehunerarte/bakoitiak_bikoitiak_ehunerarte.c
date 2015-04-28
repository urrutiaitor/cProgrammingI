#include <stdio.h>

int main(){

	//aldagaiak
	int z = 0;
	int batura = 0;
	int h = 0;

	//programa

	for (z = 1; z <= 100; z++){
		h = z % 2;
		if(h == 0){
			printf("%i\n",z);
		} else {
			batura = z + batura;
		}
	}
	printf("Batura %i da\n", batura);

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;

}

	 