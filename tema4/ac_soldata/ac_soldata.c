#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct langilea{
	char izena[30];
	float orduak;
	float ordukosoldata;
}LANGILEA;

void soldata_emateko(LANGILEA lang);

int main(){
	//aldagaiak
	LANGILEA lang1, lang2;

	//programa
	lang1.orduak = 0;
	lang2.orduak = 0;

	soldata_emateko(lang1);
	soldata_emateko(lang2);

	//bukaera
	printf("Sakatu ENTER bukatzeko");
	fflush(stdin);
	getchar();
	return 0;
}

void soldata_emateko(LANGILEA lang){
	//aldagaiak
	float soldata_bez_gabe = 0, soldata_bez = 0;

	//programa
	printf("Zein da zure izena?\n");
	gets(lang.izena);
	printf("Zenbat ordu lan egin dituzu?\n", lang.izena);
	scanf("%f", &lang.orduak);
	printf("Zenbat diru jasotzen duzu orduko?\n", lang.izena);
	scanf("%f", &lang.ordukosoldata);

	if (lang.orduak < 40){
		soldata_bez_gabe = lang.orduak*lang.ordukosoldata;
	}
	else{
		soldata_bez_gabe = (lang.orduak*lang.ordukosoldata) + ((lang.orduak - 40)*lang.ordukosoldata*1,5);
	}

	if (soldata_bez_gabe < 200){
		soldata_bez = soldata_bez_gabe - (soldata_bez_gabe*0.1);
	}
	else{
		soldata_bez = (soldata_bez_gabe - (soldata_bez_gabe*0.1)) + ((soldata_bez_gabe-200)-(soldata_bez_gabe - 200)*1.2);
	}
	printf("%.2fE ordaindu behar dizute\n", soldata_bez);
}