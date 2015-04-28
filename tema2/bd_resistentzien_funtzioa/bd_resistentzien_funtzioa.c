#include <stdio.h>

float erre_eskaera();
float erre_batura(float erre1, float erre2);


int main(){
	//aldagaiak
	float erresistentzia = 0;

	//programa
	erresistentzia = erre_eskaera();
	printf("Erresistentzien balioa paraleloan %.2f ohmiokoa izango da\n", erresistentzia);

	//amaiera
	printf("Sakatu intro bukatzeko\n");
	fflush(stdin);
	getchar();
	return 0;
}

float erre_eskaera(){
	//aldagaiak
	float erre1 = 0,erre2=0,reterre=0;

	//programa
	printf("Zenbatekoa da erresistentza?\n>");
	scanf("%f", &erre1);
	printf("Zenbatekoa da erresistentza?\n>");
	scanf("%f", &erre2);
	reterre = erre_batura(erre1, erre2);

	//Bukaera
	return reterre;
}

float erre_batura(float erre1, float erre2){
	//aldagaiak
	float retbatura = 0;

	//programa
	retbatura = 1 / ((1 / erre1) + (1 / erre2));

	//amaiera
	return retbatura;


}