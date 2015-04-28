#include <stdio.h>

int bakoitzarengastua(float kantitatea);

int main(){
	//aldagaiak
	int pertsonak = 0, i = 0;
	float kantitatea = 0, kostua = 0;

	//programa
	printf("Zenbatu pertsonen ur kontsumoa kalkulatu behar da?\n");
	scanf("%i", &pertsonak);
	for (i = 1; i <= pertsonak; i++){
		printf("Zenbat litro ur kontsumitu dituzu?\n");
		scanf("%f", &kantitatea);
		kostua = bakoitzarengastua(kantitatea);
		printf("%f euro ordaindu behar dituzu\n", kostua);
	}

	//Bukaera
	printf("Sakatu enter...\n");
	fflush(stdin);
	getchar();
	return 0;
}

int bakoitzarengastua(float kantitatea){

	//aldagaiak
	float ret_dirua = 0;

	//programa
	if (kantitatea <= 50){
		ret_dirua = 0;
	}
	else {
		if (kantitatea <= 200){
			ret_dirua = (((kantitatea - 50) * 0.1) + 6);
		}
		else {
			ret_dirua = (((kantitatea - 250) * 0.3) + (150 * 0, 1));
		}
	}
	ret_dirua = ret_dirua + 6;

	//bukaera
	return ret_dirua;
}