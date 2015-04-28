#include <stdio.h>
#include <math.h>

//funtzioa definitu

float laukiak(float zenb, float tartea, int kopurua);
int main(){
	//aldagaiak
	float zenb = 0, azalera = 0, tartea = 0, kopurua = 0;

	//programa
	printf("sartu noraino klakulatu nahi duzun\n");
	scanf("%f", &zenb);
	printf("sartu zenbat tartetan banatu nahi duzun\n");
	scanf("%f", &kopurua);
	tartea = zenb / kopurua;
	azalera = laukiak(zenb, tartea, kopurua);
	printf("y=errox-ren integrala 0tik %.2f-rainokoa gutxigorabehera %.2f da\n", zenb, azalera);
	//bukaera
	printf("sakatu intro bukatzeko");
	fflush(stdin);
	getchar();
	return 0;
}
float laukiak(float zenb, float tartea, int kopurua){
	//aldagaiak
	float i = 0;
	float batura = 0, laukia = 0, erroa = 0;
	//programak
	for (i = 1; i <= kopurua; i++){
		erroa = sqrt(i*tartea);
		laukia = erroa*tartea;
		batura = batura + laukia;
	}
	return batura;
}