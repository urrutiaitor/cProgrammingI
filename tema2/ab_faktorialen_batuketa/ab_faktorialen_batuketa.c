#include <stdio.h>

int faktoriala(int zenbakia);

int main(){
	//aldagaiak
	int fakt = 1, i = 0,kont=0, batura=0;

	//programa
	printf("Zenbat faktorialen batuketa egin behar da?\n>");
	scanf("%i", &kont);

	for (i = 1; i <= kont; i++){
		fakt = faktoriala(i);
		batura = batura + fakt;		
	}
	printf("%i da faktorialen batuketa\n", batura);

	//Bukaera
	printf("sakatu enter...\n");
	fflush(stdin);
	getchar();
	return 0;

}

int faktoriala(int zenbakia){
	//aldagaiak
	int ret_fakt = 1;
	int kont = 0;

	//programa
	for (kont = 1; kont <= zenbakia; kont++){
		ret_fakt = ret_fakt*kont;
	}

	//bukaera
	return ret_fakt;
}