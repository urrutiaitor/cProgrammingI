#include <stdio.h>

int palindromoa(char esaldia[31],int karaktereak);
int str_luzeera(char esaldia[31]);

int main(){
	//aldagaiak
	char esaldia;
	int karaktereak = 0, emaitza=0;

	//programa
	strcpy(esaldia, "kaixo");

	printf("Sartu esaldi bat 30 karaktere baino gutxiagokoa\n");
	gets(esaldia);

	karaktereak=str_luzeera(esaldia);
	emaitza= palindromoa(esaldia,karaktereak);

	if (emaitza == 0){
		printf("Esaldia palindromoa da\n");
	}
	if (emaitza == 1){
		printf("Esaldia ez da palindromoa\n");
	}

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}

int palindromoa(char esaldia[31], int karaktereak){ //ret==1 ez da palindromoa / ret== 0 palindromoa da
	//aldagaiak
	int ret = 0,i=0;
	
	//programa
	while ((i < karaktereak)&&(ret==0)){
		if (esaldia[i] != esaldia[karaktereak - i]){
			ret = 1;
		}
		i++;
	}
	

	//amaiera
	return ret;
}

int str_luzeera(char esaldia[31]){
	//aldagaiak
	int karaktereak = 0, i = 0;
	
	//programa

	while ((esaldia[i] != '\0') && (i < 31)){
		i++;
	}

	//return
	return i;
}