#include <stdio.h>

int main(){

	//aldagaiak
	int z = 0, x = 0, e = 0;

	//programa
	printf("Zatikizuna?\n >");
	scanf("%i", &z);
	printf("Zatitzailea?\n >");
	scanf("%i", &x);

	while (z >= x){
		e = e + 1;
		z = z - x;
	}

	printf("Emaitza: %i\nHondarra: %i\n", e, z);

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}