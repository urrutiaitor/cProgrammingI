#include <stdio.h>

int berreketa(int zenb, int ber);

int main(){
	//aldagaiak
	int zenb = 0, ber = 0, totala = 0;

	//programa
	printf("Sartu lehen berrekizuna\n>");
	scanf("%i", &zenb);
	printf("Sartu lehen berretzailea\n>");
	scanf("%i", &ber);
	totala = berreketa(zenb, ber);
	printf("%i ^ %i = %i\n", zenb, ber, totala);

	printf("Sartu bigarren berrekizuna\n>");
	scanf("%i", &zenb);
	printf("Sartu bigarren berretzailea\n>");
	scanf("%i", &ber);
	totala = berreketa(zenb, ber);
	printf("%i ^ %i = %i\n", zenb, ber, totala);

	//amaiera
	printf("Sakatu enter...\n");
	fflush(stdin);
	getchar();
	return 0;
}

int berreketa(int zenb, int ber){
	int retzenb = 1, i = 0;
	for (i = 1; i <= ber; i++){
		retzenb = retzenb * zenb;
	}
	return retzenb;
}