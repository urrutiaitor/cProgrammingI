#include <stdio.h>
#include <string.h>
#include <math.h>

#define ERABILTZAILE 10
#define LIBURU 10

typedef struct erabiltzaile{
	char izena[30];
	char pasaHitza[10];
	int id; //erabiltzaile mota . 0  administradorea , 1 erabiltzaile normala
}ERABILTZAILEA;

typedef struct liburua{
	char izenburua[30];//gets erabili
	char egilea[30];//gets erabili
	int id;
	int disponibilitatea;//1 libre 0 Alokatua.
	int erabiltzailearenIda;//liburua alokatu duen erabiltzailearen id-a.
}LIBURUA;

void login(ERABILTZAILEA erabiltzaileak[ERABILTZAILE], LIBURUA liburuak[LIBURU]);



int main(){
	//aldagaiak
	ERABILTZAILEA erabiltzaileak[ERABILTZAILE];
	LIBURUA liburuak[LIBURU];

	//programa
	login(erabiltzaileak,liburuak);

	//bukaera
	printf("Sakatu ENTER bukatzeko");
	fflush(stdin);
	getchar();
	return 0;
}

void login(ERABILTZAILEA erabiltzaileak[ERABILTZAILE], LIBURUA liburuak[LIBURU]){
	//aldagaiak
	char izena[30], pasahitza[30];

	//programa
	printf("Sartu zure erabiltzailea:\n");
	gets(izena);
	printf("Sartu zure pasahitza:\n");
	gets(pasahitza);

	if ((strcmp(izena,"admin") == 0)&&(strcmp(pasahitza,"admin"))){

	}

	if (strcmp(pasahitza, "admin")==0){

	}
}