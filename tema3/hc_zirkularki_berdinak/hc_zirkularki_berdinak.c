#include <stdio.h>

int main(){
	//aldagaiak
	int arraya1[30], arraya2[30], luzera = 0, i = 0;
	int t = 0, aux = 0, berdinak = 0, kont = 0;

	//programa
	printf("Zenbat zenbaki sartuko dituzu bakoitzean?\n");
	scanf("%i", &luzera);
	
	printf("Sartu 1. segida:\n");
	for (i = 0; i < luzera; i++){
		printf(">");
		scanf("%i", &arraya1[i]);
	}
	
	printf("Sartu 2. segida:\n");
	for (i = 0; i < luzera; i++){
		printf(">");
		scanf("%i", &arraya2[i]);
	}

	for (i = 0; i < luzera; i++){
		if (arraya1[0] == arraya2[i]){
			for (t = 0; t < luzera; t++){
				if (t + i>=luzera){
					aux = t + i - luzera;
				}
				if (t + i <  luzera){
					aux = t + i;
				}
				if (arraya1[t] == arraya2[aux]){
					berdinak = 1;
					kont++;
				}
				if (kont != luzera){
					berdinak = 0;
				}
			}
		}
	}
	if (berdinak == 1){
		printf("Bi bektoreak zirkularki berdinak dira\n");
	}
	if (berdinak == 0){
		printf("Bi bektoreak zirkularki desberdinak dira\n");
	}
	

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;

}