#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int menua(int matrizea[12][31]);
void matrizea_bete(int matrizea[12][31]);
void matrizea_bistaratu(int matrizea[12][31]);
void hileko_euriteak_bistaratu(int matrizea[12][31]);
void eguneko_euriteak_bistaratu(int matrizea[12][31]);
void hileko_euriteak_modifikatu(int matrizea[12][31]);
void eguneko_euriteak_modifikatu(int matrizea[12][31]);
void hileko_batezbestekoa(int matrizea[12][31]);
void urteko_batezbestekoa(int matrizea[12][31]);

int main(){
	//aldagaiak
	int matrizea[12][31];
	int aukera = 0;

	//programa
	while (aukera != 9){
		aukera = menua(matrizea);
	}

	//bukaera
	return 0;
}

int menua(int matrizea[12][31]){
	//aldagaiak
	int aukera = 0;

	//programa
	printf("Zer nahi duzu egin?\n");
	printf("1 - Urte guztiko euriteak sartu\n");
	printf("2 - Eurite datu guztiak bistaratu\n");
	printf("3 - Hile bateko euriteak bistaratu\n");
	printf("4 - Egun bateko euriteak bistaratu\n");
	printf("5 - Hile bateko datuak modifikatu\n");
	printf("6 - Egun bateko datuak modifikatu\n");
	printf("7 - Hile batekos batazbestekoa kalkulatu\n");
	printf("8 - Hile guztienbatazbestekoa kalkulatu\n");
	printf("9 - Irten\n");

	scanf("%i", &aukera);

	switch (aukera){
	case 1:
		matrizea_bete(matrizea);
		break;
	case 2:
		matrizea_bistaratu(matrizea);
		break;
	case 3:
		hileko_euriteak_bistaratu(matrizea);
		break;
	case 4:
		eguneko_euriteak_bistaratu(matrizea);
		break;
	case 5:
		hileko_euriteak_modifikatu(matrizea);
		break;
	case 6:
		eguneko_euriteak_modifikatu(matrizea);
		break;
	case 7:
		hileko_batezbestekoa(matrizea);
		break;
	case 8:
		urteko_batezbestekoa(matrizea);
		break;
	}

	//return
	return aukera;

}

void matrizea_bete(int matrizea[12][31]){
	//aldagaiak
	int aux = 0;
	int t = 0, i = 0;
	//programa
	srand(time(NULL));
	for (i = 0; i < 12; i++){
		if ((i == 0) || (i == 2) || (i == 4) || (i == 6) || (i == 7) || (i == 9) || (i == 11)){
			for (t = 0; t < 31; t++){
				
				matrizea[i][t] = 0 + rand() %(500 - 0);
			}
		}
		if ((i == 3) || (i == 5) || (i == 8) || (i == 10)){
			for (t = 0; t < 30; t++){
				
				matrizea[i][t] = 0 + rand() %(500 - 0);
			}
		}
		if (i == 1){
			for (t = 0; t < 28; t++){
				
				matrizea[i][t] = 0 + rand() %(500 - 0);
			}
		}
	}

}

void matrizea_bistaratu(int matrizea[12][31]){
	//aldagaiak
	int t = 0, i = 0;
	
	//programa

	for (i = 0; i < 12; i++){
		if ((i == 0) || (i == 2) || (i == 4) || (i == 6) || (i == 7) || (i == 9) || (i == 11)){
			for (t = 0; t < 31; t++){
				printf("%i  ", matrizea[i][t]);
			}
		}
		if ((i == 3) || (i == 5) || (i == 8) || (i == 10)){
			for (t = 0; t < 30; t++){
				printf("%i  ", matrizea[i][t]);
			}
		}
		if (i == 1){
			for (t = 0; t < 28; t++){
				printf("%i  ", matrizea[i][t]);
			}
		}
		printf("\n");
	}
}

void hileko_euriteak_bistaratu(int matrizea[12][31]){
	//aldagaiak
	int i = 0, t = 0, aux = 0;

	//programa
	printf("Zein hiletako euriteak nahi dituzu ikusi?\n");
	scanf("%i", &aux);
	i = aux - 1;

	if ((i == 0) || (i == 2) || (i == 4) || (i == 6) || (i == 7) || (i == 9) || (i == 11)){
		printf("%i. hileko euriteak:\n", i);
		for (t = 0; t < 31; t++){
			printf(">%i\n", matrizea[i][t]);
		}
	}
	if ((i == 3) || (i == 5) || (i == 8) || (i == 10)){
		printf("%i. hileko euriteak:\n", i);
		for (t = 0; t < 30; t++){
			printf(">%i\n", matrizea[i][t]);
		}
	}
	if (i == 1){
		printf("%i. hileko euriteak:\n", i);
		for (t = 0; t < 28; t++){
			printf(">%i\n", matrizea[i][t]);
		}
	}
	
}

void eguneko_euriteak_bistaratu(int matrizea[12][31]){
	//aldagaiak
	int i = 0, t = 0, aux = 0;

	//programa
	printf("Ikusi nahi duzun eguneko hilea sartu:\n");
	scanf("%i", &aux);
	i = aux - 1;
	printf("Ikusi nahi duzun eguneko hilea sartu:\n");
	scanf("%i", &aux);
	t = aux - 1;

	printf(">%i\n", matrizea[i][t]);
}

void hileko_euriteak_modifikatu(int matrizea[12][31]){
	//aldagaiak
	int i = 0, t = 0, aux = 0;

	//programa
	printf("Zein hiletako euriteak nahi dituzu modifikatu?\n");
	scanf("%i", &aux);
	i = aux - 1;

	if ((i == 0) || (i == 2) || (i == 4) || (i == 6) || (i == 7) || (i == 9) || (i == 11)){
		printf("Joan sartzen egun bakoitzeko euriteak:\n");
		for (t = 0; t < 31; t++){
			printf(">%i.egunekoa: ", t+1);
			scanf("%i", matrizea[i][t]);
		}
	}
	if ((i == 3) || (i == 5) || (i == 8) || (i == 10)){
		printf("Joan sartzen egun bakoitzeko euriteak:\n");
		for (t = 0; t < 30; t++){
			printf(">%i.egunekoa: ", t + 1);
			scanf("%i", matrizea[i][t]);
		}
	}
	if (i == 1){
		printf("Joan sartzen egun bakoitzeko euriteak:\n");
		for (t = 0; t < 28; t++){
			printf(">%i.egunekoa: ", t + 1);
			scanf("%i", matrizea[i][t]);
		}
	}
}

void eguneko_euriteak_modifikatu(int matrizea[12][31]){
	//aldagaiak
	int i = 0, t = 0, aux = 0;

	//programa
	printf("Ikusi nahi duzun eguneko hilea sartu:\n");
	scanf("%i", &aux);
	i = aux - 1;
	printf("Ikusi nahi duzun eguneko hilea sartu:\n");
	scanf("%i", &aux);
	t = aux - 1;

	printf("Zenbat euri egin zuen egun horretan?\n");
	scanf("%i", matrizea[i][t]);
}

void hileko_batezbestekoa(int matrizea[12][31]){
	//aldagaiak
	int i = 0, t = 0, aux = 0;
	float batura = 0;

	//programa
	printf("Zein hiletako batezbestekoa nahi dituzu ikusi?\n");
	scanf("%i", &aux);
	i = aux - 1;

	if ((i == 0) || (i == 2) || (i == 4) || (i == 6) || (i == 7) || (i == 9) || (i == 11)){
		for (t = 0; t < 31; t++){
			batura = batura + matrizea[i][t];
		}
		batura = batura / 31;
	}
	if ((i == 3) || (i == 5) || (i == 8) || (i == 10)){
		
		for (t = 0; t < 30; t++){
			batura = batura + matrizea[i][t];
		}
		batura = batura / 30;
	}
	if (i == 1){
		
		for (t = 0; t < 28; t++){
			batura = batura + matrizea[i][t];
		}
		batura = batura / 28;
	}

	
	printf("%i. hileko batezbestekoa: %.2f\n", i, batura);
}

void urteko_batezbestekoa(int matrizea[12][31]){
	//aldagaiak
	int aux = 0;
	int t = 0, i = 0;
	float batura = 0;

	//programa
	for (i = 0; i < 12; i++){
		if ((i == 0) || (i == 2) || (i == 4) || (i == 6) || (i == 7) || (i == 9) || (i == 11)){
			for (t = 0; t < 31; t++){
				batura = batura + matrizea[i][t];
			}
		}
		if ((i == 3) || (i == 5) || (i == 8) || (i == 10)){
			for (t = 0; t < 30; t++){
				batura = batura + matrizea[i][t];
			}
		}
		if (i == 1){
			for (t = 0; t < 28; t++){
				batura = batura + matrizea[i][t];
			}
		}
	}
	batura = batura / 365;
	printf("Urtean zehar egin duen prezipitazioen batezbestekoa: %.2f\n", batura);
}