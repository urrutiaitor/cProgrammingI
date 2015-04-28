#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX 100

typedef struct langile{
	char izena[30];
	float orduak;
	float ordukosoldata;
	float soldata;
}LANGILE;

int main(){
	int aukera = 1;
	LANGILE langileak[MAX];
	LANGILE top[5];
	int langileKop = 0;
	char izena[30];
	int id = 0;
	float bataz = 0;
	//programa
	hasieratu(top); //dana 0-ra
	hasieratu(langileak);//dana 0-ra
	while (aukera != 0){
		aukera = menua();
		switch (aukera){
		case 1:  langileak[langileKop] = langilebatSortu();
			langileKop++;
			break;
		case 2:
			printf("Ezabatu nahi duzun langilearen izena:\n");
			scanf("%s", izena);
			langileKop = langileBatEzabatu(langileak, izena);
			break;
		case 3:
			printf("Modifikatu nahi duzun langilearen izena:\n");
			scanf("%s", izena);
			id = langileBatAurkitu(langileak, izena);
			langilekop = langileBatEzabatu(langileak, id);
			break;
		case 4:
			printf("Soldata kalkulatu nahi duzun Langilearen izena:\n");
			scanf("%s", izena);
			id = langileBatAurkitu(langileak, izena);
			langileak[id].soldata = langilearenSoldataKalkulatu(langileak[id]);
			printf("Soldata:%f\n", langileak[id].soldata);
			break;
		case 5:
			printf("Soldata kalkulatu nahi duzun Langilearen izena:\n");
			scanf("%s", izena);
			id = langileBatAurkitu(langileak, izena);
			langileaBistaratu(langileak[id]);
		case 6:
			langileGuztienInformazioaBistaratu(langileak, langileKop);
			break;
		case 7:
			bataz = soldatenBatazbestekoa(langileak, langileKop);
			break;
		case 8:
			topKalkulatu(langileak, langileKop, top);
			langileGuztienInformazioaBistaratu(top, 5);
			break;
		default:

		}
	}
}
