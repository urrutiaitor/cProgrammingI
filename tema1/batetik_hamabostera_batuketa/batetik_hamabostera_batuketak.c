#include <stdio.h>

int main(){
	//aldagaiak
	int z = 0;
	int batura = 0;

	//programa
	for (z=0; z <= 15; z++){
		if (z!=12){
			batura = batura + z;
		}
	}
		
	printf("%i da zenbakien batura\n", batura);
	

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;

}

