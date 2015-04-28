#include <stdio.h>

int zirkuluaren_barruan(erradioa, xz, yz, x0, y0);

int main(){
	//aldagaiak
	int erradioa = 0, x = 0, y = 0, x0 = 0, y0 = 0, emaitza = 0;

	//programa
	printf("Sartu zirkunferentziaren erradioa\n");
	scanf("%i", &erradioa);
	printf("Sartu zirkunferentziaren zentroa\n");
	scanf("%i,%i", &x0, &y0);
	printf("Sartu puntuaren koordenatuak\n");
	scanf("%i,%i", &x,&y);
	zirkuluaren_barruan(erradioa, x0, y0, x, y);
	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}

int zirkuluaren_barruan(erradioa, x0, y0, x, y){
	//aldagaiak
	int a = 0, b = 0;
	a = (((x - x0)*(x - x0)) + ((y - y0)*(y - y0)));
	b = (erradioa*erradioa);
	if ( a==b){
		printf("Puntua zirkunferentziaren barruan dago\n");
	}
	else {
		printf("Puntua ez dago zirkunferentziaren barruan\n");
	}
}