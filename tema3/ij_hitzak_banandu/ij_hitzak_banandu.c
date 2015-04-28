#include <stdio.h>

void banandu_printatu(char stringa[100], int i);

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

	banandu_printatu(stringa, i);

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}

void banandu_printatu(char stringa[100], int i){
	//aldagaiak
	int t = 0;
	int kont = 0;

	//programa
	for (t = 0; t <= i; t++){
		if (stringa[t] == ' '){
			if (stringa[t - 1] != ' '){
				printf(": %i", kont);
				printf("\n");
				kont = 0;
			}
		}
		else{
			printf("%c", stringa[t]);
			kont++;
		}
	}

}