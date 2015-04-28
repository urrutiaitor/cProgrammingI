#include <stdio.h>
#include <string.h>
#include <math.h>
typedef struct complexuak{
	float erreala;
	float irudikaria;
	float modulua;
}KONPLEXUA;

int main(){
	//aldagaiak
	KONPLEXUA zenb1, zenb2, zenb3;
	

	//programa
	printf("Sartu 1. zenbakiaren zati erreala\n");
	scanf("%f", &zenb1.erreala);
	printf("Sartu 1. zenbakiaren zati irudikaria\n");
	scanf("%f", &zenb1.irudikaria);
	zenb1.modulua = sqrt((zenb1.erreala)*(zenb1.erreala) + (zenb1.irudikaria)*(zenb1.irudikaria));
	printf("%.2f + %.2fi = |%.2f|\n", zenb1.erreala, zenb1.irudikaria, zenb1.modulua);

	printf("Sartu 2. zenbakiaren zati erreala\n");
	scanf("%f", &zenb2.erreala);
	printf("Sartu 2. zenbakiaren zati irudikaria\n");
	scanf("%f", &zenb2.irudikaria);
	zenb2.modulua = sqrt((zenb2.erreala)*(zenb2.erreala) + (zenb2.irudikaria)*(zenb2.irudikaria));
	printf("%.2f + %.2fi = |%.2f|\n", zenb2.erreala, zenb2.irudikaria, zenb2.modulua);

	printf("Sartu 3. zenbakiaren zati erreala\n");
	scanf("%f", &zenb3.erreala);
	printf("Sartu 3. zenbakiaren zati irudikaria\n");
	scanf("%f", &zenb3.irudikaria);
	zenb3.modulua = sqrt((zenb3.erreala)*(zenb3.erreala) + (zenb3.irudikaria)*(zenb3.irudikaria));
	printf("%.2f + %.2fi = |%.2f|\n", zenb3.erreala, zenb3.irudikaria, zenb3.modulua);

	//bukaera
	printf("Sakatu ENTER bukatzeko");
	fflush(stdin);
	getchar();
	return 0;
}