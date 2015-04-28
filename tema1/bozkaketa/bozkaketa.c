#include <stdio.h>

int main(){

	//aldagaiak
	char auxizena;
	int auxpuntuazioa, puntuazioa1, puntuazioa2, puntuazioa3, irabaztekoBotoak = 0;

	char izena1;
	char izena2;
	char izena3;
	auxpuntuazioa = 0;
	puntuazioa1 = 0;
	puntuazioa2 = 0;
	puntuazioa3 = 0;

	//programa
	printf("1.hautagaiaren iniziala eta puntuazioa sartu\n");
	scanf("%c", &izena1);
	scanf("%i", &puntuazioa1);
	fflush(stdin);
	printf("2.hautagaiaren iniziala eta puntuazioa sartu\n");
	scanf("%c", &izena2);
	scanf("%i", &puntuazioa2);
	fflush(stdin);
	printf("3.hautagaiaren iniziala eta puntuazioa sartu\n");
	scanf("%c", &izena3);
	scanf("%i", &puntuazioa3);
	fflush(stdin);
	irabaztekoBotoak = (puntuazioa1 + puntuazioa2 + puntuazioa3) / 2 + 1;
	if (irabaztekoBotoak <= puntuazioa1){//if1
		printf("%c da irabazlea %i botorekin\n", izena1, puntuazioa1);
	}
	else{
		if (irabaztekoBotoak <= puntuazioa2){//if2
			printf("%c da irabazlea %i botorekin\n", izena2, puntuazioa2);
		}
		else{
			if (irabaztekoBotoak <= puntuazioa3){//if3
				printf("%c da irabazlea %i botorekin\n", izena3, puntuazioa3);
			}
			else{
				if (puntuazioa2 > puntuazioa1){
					auxizena = izena1;
					auxpuntuazioa = puntuazioa1;
					izena1 = izena2;
					puntuazioa1 = puntuazioa2;
					izena2 = auxizena;
					puntuazioa2 = auxpuntuazioa;
				}
				if (puntuazioa3 > puntuazioa1){
					auxizena = izena1;
					auxpuntuazioa = puntuazioa1;
					izena1 = izena3;
					puntuazioa1 = puntuazioa3;
					izena3 = izena2;
					puntuazioa3 = puntuazioa2;
					izena2 = auxizena;
					puntuazioa2 = auxpuntuazioa;
				}
				else{
					if (puntuazioa3 > puntuazioa2){
						auxizena = izena2;
						auxpuntuazioa = puntuazioa2;
						izena2 = izena3;
						puntuazioa2 = puntuazioa3;
						izena3 = auxizena;
						puntuazioa3 = auxpuntuazioa;
					}
				}
				printf("%c lehena da %i punturekin\n", izena1, puntuazioa1);
			}
		}
	}

	//bukaera
	printf("Sakatu tekla bat bukatzeko\n");
	fflush(stdin);
	getchar();

	return 0;
}