#include <stdio.h>

void jesarlekuak_konprobatu(int jesarlekuak[25][5]);
void libre_daudenak(int jesarlekuak[25][5]);

int main(){
	//aldagaiak
	int jesarlekuak[25][5];
	int i = 0, t = 0;
	int segi = 1;

	//programa
	for (i = 0; i < 25; i++){
		for (t = 0; t < 5; t++){
			jesarlekuak[i][t] = 0;
		}
	}
	
	while (segi == 1){
		libre_daudenak(jesarlekuak);
		jesarlekuak_konprobatu(jesarlekuak);
		printf("Beste jesarlekurik erreserbatu nahi duzu? BAI(1)/EZ(0)\n");
		scanf("%i", &segi);
	}


	//bukaera
	return 0;
}

void jesarlekuak_konprobatu(int jesarlekuak[25][5]){
	//aldagaiak
	int baiezkoa = 0;
	int y = 0, x = 0;
	int erreserbatu = 0;
	int aux = 0;

	//programa
	printf("Sartu nahi duzun lerroa\n");
	scanf("%i", &aux);
	y = aux - 1;
	printf("Sartu nahi duzun zutabea\n");
	scanf("%i", &aux);
	x = aux - 1;

	if (jesarlekuak[y][x] == 0){
		printf("Jesarlekua libre dago\n");
		printf("Jesarlekua erreserbatu nahi duzu? BAI(1)/EZ(0)\n");
		scanf("%i", &erreserbatu);
		if (erreserbatu == 1){
			jesarlekuak[y][x] = 1;
			printf("Jesarlekua erreserbatu duzu\n");
		}
	}
	else{
		printf("Jesarlekua ez dago libre \n");
	}
}

void libre_daudenak(int jesarlekuak[25][5]){
	//aldagaiak
	int i = 0, t = 0, libreak = 0;

	//programa
	for (i = 0; i < 25; i++){
		for (t = 0; t < 5; t++){
			if (jesarlekuak[i][t] == 0){
				libreak++;
			}
		}
	}

	for (i = 0; i < 25; i++){
		printf("%i. lerroan dauden jesarleku libreak hauek dira:\n", i+1);
		for (t = 0; t < 5; t++){
			if (jesarlekuak[i][t] == 0){
				printf("%i ", t+1);
			}
		}
		printf("\n\n");
	}
}