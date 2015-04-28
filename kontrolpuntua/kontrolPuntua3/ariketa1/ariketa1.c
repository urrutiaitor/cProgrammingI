#include <stdio.h>
#define MAX 100

int funtzioa_jaso(char esaldia[MAX]);
void kontatu_printatu(char esaldia[MAX], int tamaina);

int main(){
	//aldagaiak
	int tamaina = 0;
	char esaldia[MAX];

	//programa
	tamaina = funtzioa_jaso(esaldia);
	kontatu_printatu(esaldia, tamaina);

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}

int funtzioa_jaso(char esaldia[MAX]){
	//aldagaiak
	char aux[MAX];
	int i = 0;

	//programa
	printf("Sartu nahi duzun esaldia:\n");
	gets(aux);

	while ((aux[i] != '\0')&&(i < MAX)){
		esaldia[i] = aux[i];
		i++;
	}

	//bukaera
	return i;
}

void kontatu_printatu(char esaldia[MAX], int tamaina){
	//aldagaiak
	int i = 0, t = 0;
	int letrak[26];
	int gehien = 0;
	int gehien_posizioa = 0;

	//programa
	for (i = 0; i < 26; i++){
		letrak[i] = 0;
	}

	for (i = 0; i < 26; i++){
		for (t = 0; t < tamaina; t++){
			if (((esaldia[t]) == ('A' + i)) ||((esaldia[t])== ('a' + i))){
				letrak[i] = letrak[i] + 1;
			}
		}
	}
	gehien = letrak[0];
	for (i = 0; i < 26; i++){
		if (gehien < letrak[i]){
			gehien = letrak[i];
			gehien_posizioa = i;
		}
	}

	printf("Gehien agertzen den letra %c da eta %i aldiz agertzen da\n", 'A' + gehien_posizioa, gehien);

}