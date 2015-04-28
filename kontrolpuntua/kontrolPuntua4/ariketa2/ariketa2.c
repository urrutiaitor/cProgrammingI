#include <stdio.h>
#include <string.h>
#include <math.h>

#define SALTZAILEAK 2
#define PRODUKTUAK 4

typedef struct produktua{
	int id;
	char deskripzioa[50]; //gets erabili hau betetzeko.
	int saldutakoKopurua;

}PRODUKTOA;

typedef struct saltzailea{
	char izena[30];
	char abizena[30];
	PRODUKTOA produktuak[PRODUKTUAK];
	int produktuTotala;
}SALTZAILEA;

KORRIKALARIA hasieratu();


int main(){
	//aldagaiak


	//programa
	for (i = 0; i < KORRIKALARIAK; i++){
		korrik[i] = hasieratu();
	}



	//bukaera
	return 0;

}

KORRIKALARIA hasieratu(){
	//aldagaiak
	int i = 0;
	KORRIKALARIA korrik;

	//programa
	korrik.dortsala = 0;
	return korrik;
}

if ((strcmp(izena, "admin") == 0)&&(strcmp(pasahitza, "admin"))){

}