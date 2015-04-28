#include <stdio.h>

int main(){ //f(n,i)=n!/(i!*(n-i)!)
	//aldagaiak
	int n = 0, i = 0, a = 0, emaitza = 1, emaitzan = 1, emaitzai = 1, emaitzaa = 0;

	//programa
	printf("f(n,i)=n!/(i!*(n-i)!)\n");
	printf("Sartu N\n>");
	scanf("%i", &n);
	printf("Sartu I\n>");
	scanf("%i", &i);
	a = n - i;

	while (n != 0){
		emaitzan = emaitzan * n;
		n = n - 1;
	}
	while (i != 0){
		emaitzai = emaitzai * i;
		i = i - 1;
	}
	while (a != 0){
		emaitzaa = emaitzaa * a;
		a = a - 1;
	}

	emaitza = emaitzan / (emaitzai*emaitzaa);
	printf("%i", emaitza);




	//bukaera
	printf("Sakatu intro bukatzeko\n");
	fflush(stdin);
	getchar();
	return 0;
}