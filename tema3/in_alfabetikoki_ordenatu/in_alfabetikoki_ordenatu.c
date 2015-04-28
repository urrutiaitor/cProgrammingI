#include <stdio.h>

void ordenatu_printatu(char stringa[100],char ordenatuta, int i);

int main(){
	//aldagaiak
	char aux[100], stringa[100], ordenatuta[100];
	int i = 0;

	//programa
	printf("Sartu gogoko duzun hitza:\n");
	gets(aux);
	while ((i < 100)&&(aux[i] != '\0')){
		stringa[i] = aux[i];
		i++;
	}
	stringa[i] = ' ';
	stringa[i + 1] = '\0';

	ordenatu_printatu(stringa,ordenatuta, i);

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}

void ordenatu_printatu(char stringa[100], char ordenatuta[100], int i){
	//aldagaiak
	int t = 0;
	int kont = 0;
	int w = 0;

	//programa
	for (t = 0; t < 27; t++){
		for (w = 0; w < i; w++){
			if (stringa[w] == (97 + t)){
				ordenatuta[kont] = stringa[w];
				kont++;
			}
		}
		
	}

	for (t = 0; t < i; t++){
		printf("%c", ordenatuta[t]);
	}
	printf("\n");
}