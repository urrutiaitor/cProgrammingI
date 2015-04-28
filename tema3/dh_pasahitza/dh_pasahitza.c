#include <stdio.h>
#define PASSWORD qwerty
#define USERNAME admin

int konprobazioa(char user[], char pass[], char user_saiakera[], char pass_saiakera[]);
int menua();

int main(){

	//aldagiak
	char pass[] = "qwerty";
	char user[] = "admin";
	char pass_saiakera[] = " ";
	char user_saiakera[] = " ";
	int aukera = 0;
	int i = 1;
	int egokia = 0;

	//programa
	
	while ((i <= 3)&&(egokia == 0)){
		egokia = konprobazioa(user, pass,user_saiakera,pass_saiakera);
		i++;

	}
	if (egokia == 1){
		printf("***Pasahitz edo usuario egokia sartu duzu***\n");
		aukera = menua();

	}
	if (egokia == 0){
		printf("***Ez duzu pasahitz edo usuario egokia sartu***\n");
	}

	if (aukera == 1){
		printf("Irtetzen...\n");
	}
	
	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}

int konprobazioa(char user[], char pass[], char user_saiakera[], char pass_saiakera[]){
	//aldagaiak
	int egokia=0;
	int i = 0;

	//programa
	printf("Sartu user-a\n>");
	gets(user_saiakera);

	printf("Sartu password-a\n>");
	gets(pass_saiakera);

	for (i = 0; i < 7; i++){
		if ((user_saiakera[i] == user[i])&&(pass_saiakera[i] == pass[i])){
			egokia = 1;
		}
	}
	//bukaera
	return egokia;
}

int menua(){
	//aldagaiak
	int aukera = 0;

	//programa
	printf("Zer egin nahi duzu?\n");
	printf(">1. Programatik irten\n");
	scanf("%i", &aukera);

	//return
	return aukera;
}