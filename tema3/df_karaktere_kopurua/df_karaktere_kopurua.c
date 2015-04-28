#include <stdio.h>

int str_luzeera();

int main(){
	//aldagaiak
	int karaktereak = 0;

	//programa
	karaktereak = str_luzeera();
	printf("Lerroak %i karaktere ditu\n", karaktereak);

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}

int str_luzeera(){
	//aldagaiak
	int karaktereak = 0,i=0;
	char lerroa[31];

	//programa
	printf("Sartu esaldi bat 30 karaktere baino gutxiagokoa\n");
	gets(lerroa);

	while ( (lerroa[i] != '\0') && (i<31) ){
		i++;
	}

	//return
	return i;
}