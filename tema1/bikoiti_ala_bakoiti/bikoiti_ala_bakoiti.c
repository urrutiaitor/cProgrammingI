#include <stdio.h>

int main(){
	//aldagaiak
	int a = 0;
	int h = 0;
	
	//programa
	printf("Zein da zenbakia?");
	scanf("%i", &a);
	h = a % 2;
	if (h==0){
		printf("%i zenbaki bikoitia da\n",a);
	} else {
		printf("%i zenbaki bakoitia da\n",a);
	}
	
	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;

}