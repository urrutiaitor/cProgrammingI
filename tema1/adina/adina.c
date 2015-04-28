#include <stdio.h>

int main(){
	//aldagaiak
	int adina, jaiotzeurtea;
	adina=0;
	jaiotzeurtea = 0;
	
	//programa
	printf("Noiz jaio zinen?");
	scanf("%i", &jaiotzeurtea);
	adina = 2013 - jaiotzeurtea;
	printf("%i urte dituzu\n", adina);

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;

}