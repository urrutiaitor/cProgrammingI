#include <stdio.h>

int main(){

	//aldagaiak
	int v = 0;
	int kostua = 0;

	 //programa
	printf("Zenbat litro kontsumitu dituzu?");
	scanf("%i",&v);
	if (v <=50){
		kostua = 0;
	} else {
		if (v <= 200){
			kostua = (((v - 50) * 0.1) + 6);
		} else {
			kostua = (((v - 250) * 0.3) + (150 * 0,1));
		}
	}
	kostua = kostua + 6;
	if (kostua < 0){
		printf("Errorea");
	} else {
		printf("%i euro ordaindu behar dituzu\n", kostua);
	}
	
	
	//amaiera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;

}