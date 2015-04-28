#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX 8


int arraya_sortu(int arraya[MAX]);
void arraya_ordenatu(int arraya[MAX], int bikoiti_kopurua);
void arraya_printatu(int arraya[MAX]);

int main(){
	//aldagaiak
	int arraya[MAX];
	int bikoiti_kopurua = 0;

	//programa
	bikoiti_kopurua = arraya_sortu(arraya);
	arraya_printatu(arraya);

	printf("Sakatu enter arraya ordenatzeko\n");
	fflush(stdin);
	getchar();

	arraya_ordenatu(arraya, bikoiti_kopurua);
	arraya_printatu(arraya);

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}

int arraya_sortu(int arraya[MAX]){
	//aldagaiak
	int i = 0, bikoiti_kopurua = 0, zenb = 0, aux = 0;
	//programa
	srand(time(NULL));

	for (i = 0; i < MAX; i++){

		aux = rand() % 999 + 1;
		arraya[i] = aux;

		zenb = arraya[i];

		if (zenb % 2 == 0){
			bikoiti_kopurua++;
		}
	}
	//return
	return bikoiti_kopurua;

}

void arraya_ordenatu(int arraya[MAX], int bikoiti_kopurua){
	//aldagaiak
	int i = 0;
	int ordenatuta = 0;
	int zenb = 0;
	int t = 0;
	int aux1 = 0;
	int aux2 = 2;
	int aurkituta = 0;

	//programa
	while (ordenatuta == 0){
		for (i = 0; i < MAX + 1; i++){ //behin baino gehiago pasatuko da, eta bakoitzean zenbaki bat aldatuko du.
			if (arraya[i] % 2 == 1){ //lehenengo zenbaki BAKOITIA selezionatuko ditu
				for (t = MAX-1; t >1; t--){ //lehenengo zenbaki BIKOITIA AURKITZEKO
					if (arraya[t] % 2 == 0){ //azkenengo zenbaki BIKOITIA selezionatuko ditu
						aux1 = arraya[i];
						arraya[i] = arraya[t];
						arraya[t] = aux1;

					}//IF
				} //FOR
			}//IF

		}//FOR

		for (i = 0; i < bikoiti_kopurua; i++){//konprobatuko du ia aldaketa gehiagorik behar den
			if (arraya[i] % 2 == 1){
				ordenatuta = 0;
			}//IF
			if (arraya[i] % 2 == 0){
				ordenatuta = 1;
			}//IF
		}//FOR
	} //WHILE

	/*

	while (ordenatuta == 0){
	for (i = 1; i <= bikoiti_kopurua; i++){
	zenb = arraya[i];
	if (zenb % 2 == 1){
	for (t = 0; t < 99; t++){
	aux1 = arraya[t];
	if (aux1 % 2 == 1){
	aux2 = arraya[i];
	arraya[i] = arraya[t];
	arraya[t] = aux2;
	t = 99;
	}
	}
	}
	}

	ordenatuta = 1;
	for (i = 1; i <= bikoiti_kopurua;i++){
	zenb = arraya[i];
	if (zenb % 2 == 0){
	ordenatuta = ordenatuta * 0;
	}
	}
	}
	*/
	//return
	return 0;
}

void arraya_printatu(int arraya[99]){
	//aldagaiak
	int i = 0;

	//programa
	printf("Arrayeko zenbakiak hauek dira:\n");
	for (i = 0; i < MAX; i++){
		printf(">%i\n", arraya[i]);
	}
	printf("\n");

	//return
	return 0;
}

