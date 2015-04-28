#include <stdio.h>

void kodifikatu_printatu(char stringa[100], int i);

int main(){
	//aldagaiak
	char aux[100], stringa[100];
	int i = 0;

	//programa
	printf("Sartu gogoko duzun esaldia:\n");
	gets(aux);
	while ((i < 100)&&(aux[i] != '\0')){
		stringa[i] = aux[i];
		i++;
	}
	stringa[i] = ' ';
	stringa[i + 1] = '\0';

	kodifikatu_printatu(stringa, i);

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}

void kodifikatu_printatu(char stringa[100], int i){
	//aldagaiak
	int t = 0;
	int kont = 0;

	//programa
	for (t = 0; t < i; t++){
		if (stringa[t] != ' '){
			stringa[t] = stringa[t] + 3;
		}
	}

	for (t = 0; t <= i; t++){
		printf("%c", stringa[t]);
	}
	printf("\n");
}