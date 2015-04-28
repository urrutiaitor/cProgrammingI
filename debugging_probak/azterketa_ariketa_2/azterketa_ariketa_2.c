#include <stdio.h>

int main(){
	//aldagaiak
	int biderkadura = 1;
	int batura = -1;
	int i = 1;
	int t = 1;
	int n;

	//programa
	printf("Sartu zenbaki bat\n>");
	scanf("i", &n);
	for (i = 1; i <= (n + 1); i++){
		batura = batura + biderkadura;
		t = 1;
		//biderkadura = 1;
		for (t = 1; t <= i; t++){
			biderkadura = biderkadura * t;
		}
	}
	printf("faktorialen batura %i da\n", batura);

	//amaiera
	printf("sakatu enter...\n");
	fflush(stdin);
	getchar();
	return 0;
}