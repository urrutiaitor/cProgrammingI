#include <stdio.h>

void alderantziz(int arraya[10]);

int main(){
	//aldagaiak
	int arraya[10];
	int i = 0;

	//programa
	printf("Bete arrayeko lekuak:\n");
	for (i = 0; i < 10; i++){
		printf(">");
		scanf("%i", &arraya[i]);
	}
	alderantziz(arraya);

	printf("Hau da arrayaren alderantzizkoa:\n");
	for (i = 0; i < 10; i++){
		printf(">%i\n", arraya[i]);
	}
	printf("\n");

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}

void alderantziz(int arraya[10]){
	//aldagaiak
	int aux = 0, i = 0;

	//programa
	for (i = 0; i < (10 / 2); i++){
		aux = arraya[i];
		arraya[i] = arraya[10 - 1 - i];
		arraya[10 - 1 - i] = aux;
	}

}