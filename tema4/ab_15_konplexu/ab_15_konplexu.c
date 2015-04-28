#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct complexuak{
	float erreala;
	float irudikaria;
}KONPLEXUA;

void modulua(KONPLEXUA zenb);

int main(){
	//aldagaiak

	KONPLEXUA zenb;
	int i = 0;

	//programa
	zenb.erreala = 0;
	for (i = 0; i < 15; i++){
		printf("Sartu %i. zenbakiaren zati erreala\n", i+1);
		scanf("%f", &zenb.erreala);
		printf("Sartu %i. zenbakiaren zati irudikaria\n", i+1);
		scanf("%f", &zenb.irudikaria);
		modulua(zenb);
	}


	//bukaera
	printf("Sakatu ENTER bukatzeko");
	fflush(stdin);
	getchar();
	return 0;
}

void modulua(KONPLEXUA zenb){
	//aldagaiak
	float modulua = 0;

	//programa
	modulua = sqrt((zenb.erreala)*(zenb.erreala) + (zenb.irudikaria)*(zenb.irudikaria));
	printf("%.2f + %.2fi = |%.2f|\n", zenb.erreala, zenb.irudikaria, modulua);
}