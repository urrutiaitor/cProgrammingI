#include <stdio.h>
#define MAX 4


int main(){
	//aldagaiak
	float altuera[MAX], batura = 0, handiena = 0, alt = 0, media = 0, zenb = 1, txikiena = 0;
	int i = 0, t = -1;

	//programa
	for (i = 0; i < 10; i++){
		altuera[i] = 0;
	}
	i = 0;

	while ((zenb != 0)&&(t < 10)){
		i++;
		printf("%i. altuera?\n>",i);
		scanf("%f", &altuera[i]);
		zenb = altuera[i];
		t++;
	}

	printf("\n");
	printf("**************************************************\n");
	printf("\n");
	
	for (i = 1; i <= t; i++){
		batura = batura + altuera[i];
	}
	media = batura / t;
	printf("Media %.2f ekoa da\n", media);

	printf("\n");
	printf("**************************************************\n");
	printf("\n");

	
	for (i = 1; i <= t; i++){
		alt = altuera[i];
		if (handiena < alt){
			handiena = alt;
		}
	}

	printf("Handiena %.2f da\n", handiena);
	
	i = 1;
	txikiena = altuera[i];
	for (i = 1; i <= t; i++){
		alt = altuera[i];
		if (txikiena > alt){
			txikiena = alt;
		}
	}

	printf("Txikiena %.2f da\n", txikiena);

	printf("\n");
	printf("**************************************************\n");
	printf("\n");
	
	for (i = 1; i <= t; i++){
		if (altuera[i] < media){
			printf("%i. altuera %.2f da eta media baino txikiagoa da\n", i, altuera[i]);
		}
		if (altuera[i] == media){
			printf("%i. altuera %.2f da eta mediaren berdina da\n", i, altuera[i]);
		}
		if (altuera[i] > media){
			printf("%i. altuera %.2f da eta media baino handiagoa da\n", i, altuera[i]);
		}
	}

	printf("\n");
	printf("**************************************************\n");
	printf("\n");

	for (i = 1; i <= t; i++){
		printf("%i. altuera %.2f da\n",i, altuera[i]);
	}

	printf("\n");
	printf("**************************************************\n");
	printf("\n");

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}
