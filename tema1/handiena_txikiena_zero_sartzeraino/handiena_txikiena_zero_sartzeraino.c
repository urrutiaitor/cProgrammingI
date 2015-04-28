#include <stdio.h>

int main(){
	
	//aldagaiak
	int zh;//zenbaki handiena
	int zt;//zenbaki txikiena
	int z;//zenbakia
	int ph = 1;//posizioa handiena
	int pt = 1;//posizioa txikiena
	int p = 1;//posizioa

	//programa
	printf("Sartu zenbaki bat\n >");
	scanf("%i", &z);

	zh = z;
	zt = z;

	while (z != 0){
		printf("Sartu zenbaki bat\n >");
		scanf("%i", &z);
		p++;

		if (z > zh){
			zh = z;
			ph = p;
		}
		if (z < zt){
			zt = z;
			pt = p;
		}
	}
	printf("Zenbaki handiena %i izan da eta bere posizioa %i\nZenbaki txikiena %i izan da eta bere posizioa %i\n", zh, ph, zt, pt);

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}
