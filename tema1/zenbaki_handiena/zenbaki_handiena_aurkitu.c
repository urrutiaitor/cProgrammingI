#include <stdio.h>

int main(){

	//aldagaiak

	int x = 0;
	int y = 0;

	//programa
	printf("Sartu lehenengo zenbakia\n");
	scanf("%i", &x);
	printf("Sartu bigarren zenbakia\n");
	scanf("%i", &y);

	if (x > y){
		printf("%i da zenbaki handiena\n",x);
	}
	if (y > x){
		printf("%i da zenbaki handiena\n",y);
	}
	if (x == y){
		printf("Zenbaki biak berdinak dira\n");
	}

	//amaiera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;

}
