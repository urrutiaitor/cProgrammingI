#include <stdio.h>
#define ZENBAKIAK 9

void zenbakiak_jaso(int zenbakien_arraya[9]);
void zenbakiak_ordenatu(int zenbakien_arraya[9], int zenbakiak_ordenatuta[9]);

int main(){
	//aldagaiak
	int zenbakien_arraya[9];
	int zenbakiak_ordenatuta[9];
	int i = 0;

	//programa
	zenbakiak_jaso(zenbakien_arraya);
	zenbakiak_ordenatu(zenbakien_arraya, zenbakiak_ordenatuta);
	printf("Hauek dira zenbakiak ordenatuta:\n");
	for (i = 0; i < 9; i++){
		printf(">%i\n", zenbakiak_ordenatuta[i]);
	}

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}

void zenbakiak_jaso(int zenbakien_arraya[9]){
	//aldagaiak
	int i = 0;

	//programa
	for (i = 0; i < 9; i++){
		printf("Idatzi %i garren zenbakia\n",i+1);
		scanf("%i", &zenbakien_arraya[i]);
	}

	//return
	return 0;
}

void zenbakiak_ordenatu(int zenbakien_arraya[9], int zenbakiak_ordenatuta[9]){
	//aldagaiak
	int handiena = 0, txikiena = 0;
	int i = 0, t = 0, ordenatuta = 0;
	int posizioa = 0;

	//programa
	handiena = zenbakien_arraya[i];
	for (i = 0; i < ZENBAKIAK; i++){
		if (handiena < zenbakien_arraya[i]){
			handiena = zenbakien_arraya[i];
		}
	}
	
	while (ordenatuta == 0){
		ordenatuta = 1;
		txikiena = zenbakien_arraya[t];
		for (t = 0; t < ZENBAKIAK; t++){
			if (txikiena>zenbakien_arraya[t]){
				txikiena = zenbakien_arraya[t];
				posizioa = t;
			}
		}
		zenbakiak_ordenatuta[i] = zenbakien_arraya[posizioa];
		zenbakien_arraya[posizioa] = handiena + 1;
		i++;

		for (t = 0; t < ZENBAKIAK - 1; t++){
			if (zenbakiak_ordenatuta[t]>zenbakiak_ordenatuta[t + 1]){
				ordenatuta = ordenatuta * 0;
			}
		}
	}

	//return
	return 0;
}