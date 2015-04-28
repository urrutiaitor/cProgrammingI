#include <stdio.h>

float faktorial(int zenbakia);
float gehiketa(int n);

int main(){
	//aldagaiak
	float n = 0, batura = 0;

	//programa
	printf("Sartu N zenbakia\n>");
	scanf("%f", &n);

	batura = gehiketa(n);

	printf("Batura: %.2f\n", batura);

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}

float faktorial(float zenbakia){
	//aldagaiak
	float faktoriala = 1;

	//programa
	while (zenbakia != 0){
		faktoriala = faktoriala * zenbakia;
		zenbakia = zenbakia - 1;
	}

	//amaiera
	return faktoriala;
}

float gehiketa(int n){
	//aldagaiak
	float i = 0, biderkadura = -1, batura = 0, zatikia = 0, faktoriala = 0, t = 3;

	//programa
	
	for (i = 1; i <= n; i++){
		faktoriala = faktorial(t);
		zatikia = biderkadura / faktoriala;
		batura = batura + zatikia;
		biderkadura = biderkadura*(-1);
		t = t + 2;
	}
	return batura;
}
