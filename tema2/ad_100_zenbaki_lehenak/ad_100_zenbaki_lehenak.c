#include <stdio.h>

int lehena(int zenb);

int main(){
	//aldagaiak
	int zenb = 2, zenbakiak = 0, i = 0;

	//programa
	while (i <= 100){
		zenb++;
		zenbakiak = lehena(zenb);
		if (zenbakiak == 0){
			printf(">%i\n", zenb);
			i++;
		}
	}
	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
	
}

int lehena(int zenb){
	//aldagaiak
	int i = 0, t = 0;

	//programa	
	for (i = 2; i <= zenb/2; i++){
		if (zenb%i == 0){
			t = 1;
		}
	}
	
	return t;
}