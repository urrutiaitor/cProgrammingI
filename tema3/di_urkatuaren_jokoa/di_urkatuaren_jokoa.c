#include <stdio.h>

int hitzasartu(char hitza[]);
int hitzaasmatu(char hitza[],int karakterekopurua,char saiakera[]);
int karakterekopurua(char hitza[]);
void intentoa(int karakterekopurua,char hitza[],char hitzarenkopia[]);
int hitzaasmatzekosaiakera(char hitza[], char saiakera[]);
void letrasartzea(char hitza[], char hitzarenkopia[], int karakterekopurua);

int main(){
	//aldagaiak
	char hitza[] = " ";
	char saiakera[] = " ";
	char hitzarenkopia[] = "_______________________________";
	int karakterekopurua = 0;
	int asmatua = 0;
	int i = 0;

	//programa
	karakterekopurua = hitzasartu(hitza);
	asmatua = hitzaasmatu(hitza, karakterekopurua, saiakera);

	for (i = 1; i <= 5; i++){
		intentoa(karakterekopurua, hitza, hitzarenkopia);
		hitzaasmatzekosaiakera(hitza, saiakera);
		
	}

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;

}

int hitzasartu(char hitza[]){
	//aldagaiak
	int karaktereak = 0, i = 0;

	//programa
	printf("Sartu hitz bat\n");
	gets(hitza);

	karaktereak = karakterekopurua(hitza);
	system("cls");

	//return
	return karaktereak;

}

int hitzaasmatu(char hitza[],int karakterekopurua,char saiakera[]){
	//aldagaiak
	int asmatua = 0;

	//programa
	asmatua = hitzaasmatzekosaiakera(hitza, saiakera);


	//bukaera
	return asmatua;

}

//5aldiz
int hitzaasmatzekosaiakera(char hitza[], char saiakera[]){
	//aldagaiak
	int egokia = 0;

	//programa
	if (saiakera == hitza){
		egokia = 1;

	}

	//bukaera
	return egokia;
}

//5aldiz
void intentoa(int karakterekopurua,char hitza[], char hitzarenkopia[]){
	//aldagaiak
	int i = 0;

	//programa
	printf("Hitza honelakoa da:\n");
	for (i = 0; i < karakterekopurua; i++){
		printf("%c ",hitzarenkopia[i]);
	}
	printf("\n");

	letrasartzea(hitza, hitzarenkopia, karakterekopurua);

	//return

}

void letrasartzea(char hitza[], char hitzarenkopia[], int karakterekopurua){
	//aldagaiak
	char letra[1];
	int i = 0;

	//programa
	printf("Sartu uste duzun letra:\n>");
	gets(letra);

	for (i = 0; i < karakterekopurua; i++){
		if (hitza[i] == letra){
			hitzarenkopia[i] = hitza[i];
		}
	}

	//bukaera
	return 0;

}

int karakterekopurua(char hitza[]){
	//aldagaiak
	int karaktereak = 0, i = 0;

	//programa
	while ((hitza[i] != '\0') && (i < 31)){
		i++;
	}

	//return
	return i;

}

//programa ez dago bukatua baina ez dakit nola bukatu behar den