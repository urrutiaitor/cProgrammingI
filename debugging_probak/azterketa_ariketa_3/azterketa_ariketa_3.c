#include <stdio.h>

int main(){
	//aldagaiak
	int zbki1 = 0;
	int zbki2 = 0;
	int zbki3 = 0;

	//programa
	printf("Sartu lehenengo zenbakia\n");
	scanf("%i", &zbki1);
	printf("Sartu beste zenbaki bat\n");
	scanf("%i", &zbki2);
	printf("Sartu beste zenbaki bat\n");
	scanf("%i", &zbki3);

	while (zbki3 != zbki2 + 1 || zbki3 != zbki1 + 2){
		zbki1 = zbki2;
		zbki2 = zbki3;
		printf("Sartu beste zenbaki bat\n");
		scanf("%i", &zbki3);
	}
	printf("Agur!\n");

	//amaiera
	printf("Sakatu enter...\n");
	fflush(stdin);
	getchar();
	return 0;
}