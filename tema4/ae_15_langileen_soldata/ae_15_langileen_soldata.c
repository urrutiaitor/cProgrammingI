#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct langilea{
	char izena[30];
	float orduak;
	float ordukosoldata;
	float soldata;
}LANGILEA;

LANGILEA soldata_emateko(LANGILEA lang);
void soldata_printatu(LANGILEA lang);

int main(){
	//aldagaiak
	LANGILEA lang[15];
	int i = 0;

	//programa
	for (i = 0; i < 15; i++){
		lang[i].orduak = 0;
	}

	for (i = 0; i < 15;i++){
		lang[i] = soldata_emateko(lang[i]);
		soldata_printatu(lang[i]);
	}


	//bukaera
	printf("Sakatu ENTER bukatzeko");
	fflush(stdin);
	getchar();
	return 0;
}

LANGILEA soldata_emateko(LANGILEA lang){
	//aldagaiak
	float soldata_bez_gabe = 0, soldata_bez = 0;

	//programa
	printf("Zein da zure izena?\n");
	fflush(stdin);
	gets(lang.izena);
	printf("Zenbat ordu lan egin dituzu?\n", lang.izena);
	scanf("%f", &lang.orduak);
	printf("Zenbat diru jasotzen duzu orduko?\n", lang.izena);
	scanf("%f", &lang.ordukosoldata);

	if (lang.orduak < 40){
		soldata_bez_gabe = lang.orduak*lang.ordukosoldata;
	}
	else{
		soldata_bez_gabe = (lang.orduak*lang.ordukosoldata) + ((lang.orduak - 40)*lang.ordukosoldata * 1, 5);
	}

	if (soldata_bez_gabe < 200){
		lang.soldata = soldata_bez_gabe - (soldata_bez_gabe*0.1);
	}
	else{
		lang.soldata = (soldata_bez_gabe - (soldata_bez_gabe*0.1)) + ((soldata_bez_gabe - 200) - (soldata_bez_gabe - 200)*1.2);
	}

	//reuturn 
	return lang;
}

void soldata_printatu(LANGILEA lang){
	//aldagaiak

	//programa
	printf("Zure soldata %.2f E da\n", lang.soldata);
}