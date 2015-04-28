#include <stdio.h>

int digituak(int zenbakia);

int main(){
	//aldagaiak
	int zenbakia = 0;
	int digitukopurua = 0;
	
	//programa
	printf("Idatzi zenbaki oso bat:\n");
	scanf("%i", &zenbakia);
	digitukopurua = digituak(zenbakia);
	printf("Zenbakiak %i digitu ditu\n", digitukopurua);
	
	//Bukaera
	printf("sakatu enter...\n");
	fflush(stdin);
	getchar();
	return 0;
}

int digituak(int zenbakia){
	//aldagaiak
	int ret_digituak = 1;

	//programa
	while (zenbakia >= 10) {
		zenbakia = zenbakia / 10;
		ret_digituak++;
	}
	return ret_digituak;
}
