#include <stdio.h>

float erre_batura();

int main(){
	//aldagaiak
	float erresistentzia = 0;

	//programa
	erresistentzia = erre_batura();
	printf("Erresistentzia totala %.2f da\n", erresistentzia);

	//amaiera
	printf("Sakatu intro bukatzeko\n");
	fflush(stdin);
	getchar();
	return 0;
}

float erre_batura(){
	//aldagaiak
	int  i = 0, n = 0;
	float reterre = 0, batura = 0, erre = 0;

	//programa
	
	printf("Zenbatekoa da erresistentza?\n>");
	scanf("%f", &erre);

	while (erre != 0){
		batura = 1 / erre + batura;
		printf("Zenbatekoa da erresistentza?\n>");
		scanf("%f", &erre);
	}
	
	reterre = 1 / batura;

	//Bukaera
	return reterre;

}