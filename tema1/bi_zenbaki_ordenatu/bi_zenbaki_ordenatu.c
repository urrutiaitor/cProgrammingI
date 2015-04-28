#include <stdio.h>

int main(){
	//aldagaiak
	int x = 0;
	int y = 0;
	
	//programa
	printf("Zein da lehenengo zenbakia?");
	scanf("%i", &x);
	printf("Zein da bigarren zenbakia?");
	scanf("%i", &y);
	
	if (x > y){
		printf("%i %i baino handiagoa da\n",x ,y );
	} else {
		printf("%i %i baino handiagoa da\n",y ,x );
	}

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;

}