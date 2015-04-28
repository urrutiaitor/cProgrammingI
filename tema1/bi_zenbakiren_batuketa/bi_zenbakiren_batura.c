#include <stdio.h>

int main(){

	//aldagaiak

	int x = 0;
	int y = 0;
	int emaitza = 0;

	//programa
	printf("Sartu lehenengo zenbakia\n");
	scanf("%i", &x);
	printf("Sartu bigarren zenbakia\n");
	scanf("%i", &y);
	emaitza = x + y;

	
	printf("Zenbaki bien batura %i da\n", emaitza);

	//amaiera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;

}
