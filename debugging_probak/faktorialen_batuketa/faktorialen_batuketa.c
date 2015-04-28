#include <stdio.h>

int main(){
	
	//aldagaiak
	int n = 0, i = 0, t = 0, batura = 0, faktoriala = 1;

	//programa
	printf("Sartu faktorialen kupuruaren zenbakia\n>");
	scanf("%i", &n);
	for (i = 1; i <= n; i++){
		faktoriala = 1;
		for (t = 1; t <= i; t++){
			faktoriala = faktoriala * t;
		}
		batura = batura + faktoriala;
	}
	printf("Faktorialen batura = %i\n", batura);
	
	//amaiera

	printf("Sakatu enter...\n");
	fflush(stdin);
	getchar();
	return 0;
}