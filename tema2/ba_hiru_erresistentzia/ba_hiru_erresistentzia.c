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
	float reterre = 0, err1, err2, err3;
	
	//programa
	printf("Zenbatekoa da lehen erresistentza?\n>");
	scanf("%f", &err1);
	printf("Zenbatekoa da bigarren erresistentza?\n>");
	scanf("%f", &err2);
	printf("Zenbatekoa da hirugarren erresistentza?\n>");
	scanf("%f", &err3);

	reterre = 1 / ((1 / err1) + (1 / err2) + (1 / err3));

	//Bukaera
	return reterre;

}