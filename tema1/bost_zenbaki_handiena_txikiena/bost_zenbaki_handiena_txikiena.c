#include <stdio.h>

int main(){

	//aldagaiak
	int zh = 0;
	int zt = 0;
	int z = 0;
	int i = 1;

	//programa

	printf("Sartu zenbaki bat");
	scanf("%i", &z);

	zh = z;
	zt = z;

	for (i = 1; i <= 4; i = i + 1){
		printf("Sartu zenbaki bat");
			scanf("%i", &z);
		if (z > zh){
			zh = z;
		}
		if (z > zt){
			zt = z;
		}
	
	}

	printf("Zenbaki handiena %i izan da eta txikiena %i", zh, zt);

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}