#include <stdio.h>

int berreketa(int zenb, int ber);

int main(){
	//aldagaiak
	int zenb = 0, ber = 0, totala = 0, i = 1;

	//programa
	while (i == 1){
		printf("Sartu berrekizuna\n>");
		scanf("%i", &zenb);
		printf("Sartu berretzailea\n>");
		scanf("%i", &ber);
		totala = berreketa(zenb, ber);
		printf("%i ^ %i = %i\n", zenb, ber, totala);

		printf("Beste berreketa bat egin nahi duzu?Bai(1)/Ez(0)\n>");
		scanf("%i", &i);
	}

	//amaiera
	return 0;
}

int berreketa(int zenb, int ber){
	int retzenb = 1, i = 0;
	for (i = 1; i <= ber; i++){
		retzenb = retzenb * zenb;
	}
	return retzenb;
}