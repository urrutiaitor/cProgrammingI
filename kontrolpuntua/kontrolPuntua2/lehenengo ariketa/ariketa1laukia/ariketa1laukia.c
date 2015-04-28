#include <stdio.h>

int main(){
	//aldagaiak
	int i = 1, t = 0, espazioakopurua = 0, n = 0;

	//programa

	printf("Zeinbat izango da altuera ?\n");
	scanf("%i", &n);

	while (i <= n){ //altuera adierazteko for-a

		while (i == 1){ //lehenengo lerroa
			for (t = 1; t <= n; t++){ //lerro bakoitzekoa
				printf("*");
			}  //lerro amaiera
			printf("\n");
			i++;
		}//lehenengo lerroaren amaiera


		while (i != 1 && i != n){ //erdiko lerro guztiak
			printf("*");
			espazioakopurua = n - 2;
			for (t = 1; t <= espazioakopurua; t++){ //lerroko espazioak
				printf(" ");
			}
			printf("*");
			printf("\n");
			i++;
		}//erdiko lerroen amaiera

		while (i = 1){ //azkenengo lerroa
			for (t = 1; t <= n; t++){ //lerro bakoitzekoa
				printf("*");
			}  //lerro amaiera
			printf("\n");
			i++;
		}//azkenengo lerroaren amaiera

	} // altuerako amaiera

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}

//ez da lehenengo lerroko bukletik irteten
//ez dit denbora eman arazoa konpontzeko

