#include <stdio.h>

int main(){
	//aldagaiak
	int z = 0;
	int t = 1;

	//programa
	printf("Zenbakia?\n >");
	scanf("%i", &z);
	while (z != 0){
		t = t * z;
		z = z - 1;
	}

	printf("faktoriala = %i\n", t);
	
	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;

}