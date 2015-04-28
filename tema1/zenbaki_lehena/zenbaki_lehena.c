#include <stdio.h>

int main(){

	//aldagaiak
	int z = 0;
	int i = 0;
	int t = 0; //t = 1 izandakoan lehena izango da, t = 0 izandakoan ez da lehena izango;

	//programa

	printf("Sartu zenbaki bat\n >");
	scanf("%i", &z);

	if (z % 2 != 0 || z == 0){
		for (i = 2; i <= z; i++){
			if (z%i == 0){
				t = 1;
				i = z + 1;
			}
		}
	}
	if (t == 1){
		printf("%i zenbaki lehena da\n", z);
	}
	if (t == 0){
		printf("%i ez da zenbaki lehena\n", z);
	}

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}