#include <stdio.h>

int main(){

	//aldagaiak
	float c1 = 0, c2 = 0, a = 0;

	//programa
	printf("Zein da lehenengo katetoaren luzeera metrotan?");
	scanf("%f", &c1);
	printf("Zein da bigarren katetoaren luzeera metrotan?");

	scanf("%f", &c2);
	a = ((c1*c2)/2);
	printf("%f metro karratuko azalera du\n", a);

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;

}
