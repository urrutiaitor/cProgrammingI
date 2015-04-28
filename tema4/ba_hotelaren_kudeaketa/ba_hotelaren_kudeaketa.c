#include <stdio.h>
#include <string.h>
#include <math.h>

#define ERAIKINAMAX 2
#define PISUAMAX 2
#define LOGELAMAX 10

typedef struct logela{
	int disponibilitatea;
	int garbitua;
	int gela_id;
	int gela_mota;
	char deskribapena[150];
}LOGELA;

typedef struct pisua{
	LOGELA logela[LOGELAMAX];
	int pisu_id;
	int logela_kop;


}PISUA;

typedef struct eraikina{
	PISUA pisua[PISUAMAX];
	int eraikin_id;
	int pisu_kop;
	
}ERAIKINA;

typedef struct hotela{
	ERAIKINA eraikina[ERAIKINAMAX];
	char izena[30];
	char herria[30];
	char kalea[30];
	int izar_kop;
	int eraikin_kop;
	
}HOTELA;


int main(){
	//aldagaiak
	HOTELA hotelA;
	HOTELA hotelB;

	//programa

	//bukaera
	printf("Sakatu ENTER bukatzeko");
	fflush(stdin);
	getchar();
	return 0;
}