#include <stdio.h>
#include<math.h>

int menua();
int lehenengoaukera();
int bigarrenaukera();
int hirugarrenaukera(int zenb, int kont);
int laugarrenaukera();
int bostgarrenaukera();
float seigarrenaukera();
void aukeraexekutatufuntzioa();

int main(){

	//aldagaiak
	int aukera = 0;

	//programa
	aukera = menua();
	printf("Zure aukera: %i\n", aukera);
	aukeraexekutatufuntzioa(aukera);

	//amaiera
	printf("Sakatu enter bukatzeko");
	fflush(stdin);
	getchar();
	return 0;
}

void aukeraexekutatufuntzioa(aukera){
	
	//aldagaiak
	int digitukopurua = 0, zatitzailekopurua = 0, zatitzaileak = 0, zenb = 0;
	int perfektua = 0, faktoriala = 0, kont = 0;
	float emaitza = 0, ekuazioa = 0;
	
	switch (aukera){

	case 1:digitukopurua = lehenengoaukera();
		printf("%i digitu ditu zenbakiak\n", digitukopurua);
		break;

	case 2:zatitzailekopurua = bigarrenaukera();
		printf("%i zatitzaile ditu zenbakiak\n", zatitzailekopurua);
		break;

	case 3:printf("Zenbaki bat sartu\n");
		scanf("%i", &zenb);
		for (kont = 1; kont <= zenb / 2; kont++){
			zatitzaileak = hirugarrenaukera(zenb, kont);
			printf("Zatitzailea:\n");
			printf("%i\n", zatitzaileak);
		}
		break;

	case 4:perfektua = laugarrenaukera();
		if (perfektua == 1){
			printf("Zenbakia perfektua da\n");
		}
		else{
			printf("Zenbakia ez da perfektua\n");
		}
		break;

	case 5:faktoriala = bostgarrenaukera();
		printf("Zenbakiaren faktoriala %i da\n", faktoriala);
		break;

	case 6:ekuazioa = seigarrenaukera();
		printf("Ekuazioaren emaitza %f da\n", ekuazioa);

	default:break;
	}

}

int menua(){
	//aldagaiak
	int retaukera = 0;

	//programa
	printf("****************************************\n");
	printf("1.Zenbaki baten digitu kopurua\n");
	printf("2.Zenbaki zatitzaileen kopurua\n");
	printf("3.Zenbaki baten zatitaileak bistaratu\n");
	printf("4.Zenbaki bat perfektua da?\n");
	printf("5.Zenbaki baten faktoriala\n");
	printf("6.2.Mailako ekuazioa ebatzi\n");
	printf("0.Irten\n");
	printf("****************************************\n\n");
	printf("Zer nahi duzu egin(0-6)?\n");
	scanf("%i", &retaukera);



	//amaiera
	return retaukera;
}

int lehenengoaukera(){

	//aldagaiak
	int zenbakia = 0, digituak = 0, kont = 1;

	//programa
	printf("Idatzi zenbaki oso bat:\n");
	scanf("%i", &zenbakia);
	while (zenbakia >= 10){
		zenbakia = zenbakia / 10;
		kont++;
	}

	//amaiera
	return kont;
}

int bigarrenaukera(){

	//aldagaiak
	int zenb = 0, kont = 0, hondarra = 0, zatitzaileak = 0;

	//programa
	printf("zenbaki bat sartu\n");
	scanf("%i", &zenb);
	for (kont = 1; kont <= zenb / 2; kont++){
		hondarra = zenb%kont;
		if (hondarra == 0){
			zatitzaileak++;
		}
	}

	//amaiera
	return zatitzaileak;
}

int hirugarrenaukera(int zenb, int kont){

	//aldagaiak
	int hondarra = 0;

	//programa
	hondarra = zenb%kont;
	if (hondarra == 0){
		return kont;
	}
}

int laugarrenaukera(){
	//aldagaiak
	int zenb = 0, kont = 0, hondarra = 0, zatitzaileak = 0, batura = 0;

	//programa
	printf("Sartu zenbaki bat\n");
	scanf("%i", &zenb);
	for (kont = 1; kont <= zenb / 2; kont++){
		hondarra = zenb%kont;
		if (hondarra == 0){
			batura = batura + kont;
		}
	}
	if (batura == zenb){
		return 1;
	}
	else{
		return 0;
	}
}

int bostgarrenaukera(){

	//aldagaiak
	int ret_fakt = 1, kont = 0, zenb = 0;

	//programa
	printf("Sartu zenbaki bat\n");
	scanf("%i", &zenb);
	for (kont = 1; kont <= zenb; kont++){
		ret_fakt = ret_fakt*kont;
	}

	//amaiera
	return ret_fakt;
}

float seigarrenaukera(){
	//aldagaiak
	float emaitza = 0, erro = 0, a = 0, b = 0, c = 0;
	//programa
	printf("x^2 ri biderkatzen dagoen zenbakia?\n");
	scanf("%f", &a);
	printf("x eri biderkatzen dagoen zenbakia?\n");
	scanf("%f", &b);
	printf("Gehitzen dagoen zenbakia?\n");
	scanf("%f", &c);
	if (a == 0){
		if (b == 0){
			emaitza = 0;
		}
		else{
			emaitza = -c / b;
		}
	}
	else{
		erro = b*b - 4 * a*c;
		if (erro > 0){
			emaitza = (-b + sqrt(erro)) / 2 * a;
		}
	}
	//bukaera
	return emaitza;
}