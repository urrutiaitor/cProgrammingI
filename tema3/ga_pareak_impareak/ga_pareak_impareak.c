#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arraySortu(int pAusazkoZenbakiak[]);
void parInparrak(int pAusazkoZenbakiak[], int parrak[], int inparrak[]);

int main(){
	//aldagaiak
	int pAusazkoZenbakiak[100], parrak[100], inparrak[100];
	int i = 0, pareak = 0;

	//programa
	pareak=arraySortu(pAusazkoZenbakiak);
	parInparrak(pAusazkoZenbakiak, parrak, inparrak);
	printf("Zenbaki parrak hauek izan dira:\n");
	for(i=0;i<pareak;i++){
		printf(">%i\n", parrak[i]);
		i++;
	}
	i = 0;

	printf("Zenbaki inparrak hauek izan dira:\n");
	for (i = 0; i < (100 - pareak);i++) {
		printf(">%i\n", inparrak[i]);
		i++;
	}

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}

int arraySortu(int pAusazkoZenbakiak[]){
	//aldagaiak
	int i = 0, bikoiti_kopurua = 0, zenb = 0, aux = 0, pareak = 0;
	//programa
	srand(time(NULL));

	for (i = 0; i < 100; i++){
		aux = rand() % 999 + 1;
		pAusazkoZenbakiak[i] = aux;
		if (aux % 2 == 0){
			pareak++;
		}
	}

	//return
	return pareak;
}

void parInparrak(int pAusazkoZenbakiak[], int parrak[], int inparrak[]){
	//aldagaiak
	int a = 0, b = 0, i = 0;

	//programa
	for (i = 0; i < 100; i++){
		if (pAusazkoZenbakiak[i] % 2 == 0){
			parrak[a] = pAusazkoZenbakiak[i];
			a++;
		}
		if (pAusazkoZenbakiak[i] % 2 == 1){
			inparrak[b] = pAusazkoZenbakiak[i];
			b++;
		}
	}

}