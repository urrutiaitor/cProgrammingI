#include <stdio.h>

int main(){

	//aldagaiak

	int x = 0;
	int y = 0;
	int z = 0;

	//programa
	printf("Sartu lehenengo zenbakia\n");
	scanf("%i", &x);
	printf("Sartu bigarren zenbakia\n");
	scanf("%i", &y);
	printf("Sartu hirugarren zenbakia\n");
	scanf("%i", &z);


	if (x > y){
		if (x > z){
			printf("%i da zenbaki handiena\n", x);
		}else{
			printf("%i da zenbaki handiena\n", z);
	}
	}else{
		if (y>z){
			printf("%i da zenbaki handiena\n", y);
		}else{
			printf("%i da zenbaki handiena\n", z);
		}
		}	
	
	//amaiera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;

}