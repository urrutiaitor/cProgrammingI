#include <stdio.h>

int digitu_kopurua(int kodigoa);
int kodigozifrazioa(int kodigoa);
int kodigodeszifrazioa(int kodigoa);

int main(){
	//aldagaiak
	int kodigoa = 0, digituegokia = 0, emaitza = 0;

	//kodigoa zifratu
	printf("Sartu zifratu nahi duzun kodigoa\n>");
	scanf("%i", &kodigoa);
	digituegokia = digitu_kopurua(kodigoa);
	if (digituegokia == 1){
		emaitza=kodigozifrazioa(kodigoa);
		printf("Kodigo zifratua:\n> %i\n", emaitza);
	}
	else{
		printf("***Kodigoa ez da onargarria***\n");
	}

	//kodigoa deszifratu
	printf("Zein da deszifratu nahi duzun kodigoa?\n>");
	scanf("%i", &kodigoa);
	digituegokia = digitu_kopurua(kodigoa);
	if (digituegokia == 1){
		emaitza= kodigodeszifrazioa(kodigoa);
		printf("Kodigo deszifratua:\n> %i\n", emaitza);
		
	}
	else{
		printf("***Kodigoa ez da onargarria***\n");
	}


	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}

int digitu_kopurua(int kodigoa){
	//aldagaiak
	int digituegokia = 0;

	//programa
	while (kodigoa >= 10) {
		kodigoa = kodigoa / 10;
		digituegokia++;
	}
	if (digituegokia == 3){
		digituegokia = 1;
	}
	
	//amaiera
	return digituegokia;
}

int kodigozifrazioa(int kodigoa){
	//aldagaiak
	int kodigoegokia = 0, d1 = 0, d2 = 0, d3 = 0, d4 = 0, aux = 0;

	//programa
	d4 = kodigoa % 10;
	kodigoa = kodigoa / 10;
	d3 = kodigoa % 10;
	kodigoa = kodigoa / 10;
	d2 = kodigoa % 10;
	kodigoa = kodigoa / 10;
	d1 = kodigoa % 10;

	aux = d1;
	d1 = (d3 + 7) % 10;
	d3 = (aux + 7) % 10;
	
	aux = d2;
	d2 = (d4 + 7) % 10;
	d4 = (aux + 7) % 10;

	kodigoegokia = (d1 * 1000) + (d2 * 100) + (d3 * 10) + d4;
	
	//amaiera
	return kodigoegokia;
}

int kodigodeszifrazioa(int kodigoa){
	//aldagaiak
	int kodigoegokia = 0, d1 = 0, d2 = 0, d3 = 0, d4 = 0, aux = 0;

	//programa
	d4 = kodigoa % 10;
	kodigoa = kodigoa / 10;
	d3 = kodigoa % 10;
	kodigoa = kodigoa / 10;
	d2 = kodigoa % 10;
	kodigoa = kodigoa / 10;
	d1 = kodigoa % 10;

	d1 = d1 + 10 - 7;
	d2 = d2 + 10 - 7;
	d3 = d3 + 10 - 7;
	d4 = d4 + 10 - 7;

	aux = d1;
	d1 = d3;
	d3 = aux;
	aux = d2;
	d2 = d4;
	d4 = aux;
	
	kodigoegokia = (d1 * 1000) + (d2 * 100) + (d3 * 10) + d4;

	if (kodigoegokia > 10000){
		kodigoegokia = kodigoegokia % 1000;
	}
	
	//amaiera
	return kodigoegokia;
}