#include <stdio.h>

int main(){
	//aldagaiak
	int puntuakhoberena, puntuakbigarrena, puntuakazkena, auxizena;
	char izenahoberena, izenabigarrena, izenaazkena, auxpuntuak;

	//jokalariak eta puntuazioa
	printf("Lehenengo jokalaria eta bere puntuazioa?\n");
	scanf("%c, %i", &izenahoberena, &puntuakhoberena);

	printf("Bigarren jokalaria eta bere puntuazioa?\n");
	scanf("%c, %i", &izenabigarrena, &puntuakbigarrena);

	printf("Hirugarren jokalaria eta bere puntuazioa?\n");
	scanf("%c, &i", &izenaazkena, &puntuakazkena);

	//ordenatzea

	if (puntuakbigarrena > puntuakhoberena){
		auxizena = izenahoberena;
		auxpuntuak = puntuakhoberena;
		izenahoberena = izenabigarrena;
		puntuakhoberena = puntuakbigarrena;
		izenabigarrena = izenahoberena;
		puntuakbigarrena = puntuakhoberena;

	}

	if (puntuakazkena > puntuakhoberena){
		auxizena = izenahoberena;
		auxpuntuak = puntuakhoberena;
		izenahoberena = izenaazkena;
		puntuakhoberena = puntuakazkena;
		izenaazkena = izenabigarrena;
		puntuakazkena = puntuakbigarrena;
		izenabigarrena = auxizena;
		puntuakbigarrena = auxizena;

	}
	else {
		if (puntuakazkena > puntuakbigarrena){
			auxizena = izenabigarrena;
			auxpuntuak = puntuakbigarrena;
			izenabigarrena = izenaazkena;
			puntuakbigarrena = puntuakazkena;
			izenaazkena = auxizena;
			puntuakazkena = auxizena;
		}

	}

	//emaitzak

	printf("Lehenengoa %c izan da %i puntuazioarekin\n", izenahoberena, puntuakhoberena);
	printf("Bigarrena %c izan da %i puntuazioarekin\n", izenabigarrena, puntuakbigarrena);
	printf("Hirugarrena %c izan da %i puntuazioarekin", izenaazkena, puntuakazkena);

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;

}