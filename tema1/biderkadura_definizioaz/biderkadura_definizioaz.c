#include <stdio.h>

int main(){
	//aldagaiak
	int x = 0;
	int y = 0;
	int b = 0;
	int i = 0;

	//programa
	printf("Zenbaki bat sartu\n >");
	scanf("%i", &x);
	printf("Zenbaki bat sartu\n >");
	scanf("%i", &y);
	for (i = 1; i <= x; i++){
		b = b + y;
	}
	printf("Biderkadura: %i\n", b);

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;

}