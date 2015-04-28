#include <stdio.h>

int arraya_jaso(int arraya[100]);
void alderantziz_ordenatu(int arraya[100],int arraya_desordenatuta[100], int zenbakiak);
void arraya_ordenatu(int arraya_desordenatuta[100], int arraya_ordenatuta[100], int zenbakiak);

int main(){
	//aldagaiak
	int zenbakiak = 0, arraya[100];
	int arraya_ordenatuta[100];
	int arraya_desordenatuta[100];

	//programa
	zenbakiak = arraya_jaso(arraya);
	alderantziz_ordenatu(arraya, arraya_desordenatuta,zenbakiak);
	arraya_ordenatu(arraya_desordenatuta,arraya_ordenatuta,zenbakiak);

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}

int arraya_jaso(int arraya[100]){
	//aldagaiak
	int i = 0, zenbakiak = 0;

	//programa
	printf("Sartu 100-arte nahi dituzun zenbakiak eta amaitzeko  jarri 'A':\n");
	while ((arraya[i] !='A' )&&(i < 100)){
		scanf("%i", &arraya[i]);
		if ((arraya[i] < 256)&&(arraya[i]>-256)){
			zenbakiak = i+1;
		}
		i++;
	}

	//bukaera
	return zenbakiak;
}

void alderantziz_ordenatu(int arraya[100], int arraya_desordenatuta[100], int zenbakiak){
	//aldagaiak
	int egokia = 0, handiena = 0, posizioa = 0, i = 0, t = 0;

	//programa
	while (egokia == 0){
		handiena = -255;
		for (i = 0; i < zenbakiak; i++){
			if (handiena < arraya[i]){
				handiena = arraya[i];
				posizioa = i;
			}
		}
		arraya_desordenatuta[t] = handiena;
		t++;
		arraya[posizioa] = -255;
		
		egokia = 1;
		for (i = 0; i < zenbakiak; i++){
			if (arraya[i] != -255){
				egokia = 0;
			}
		}
	}
	printf("\nArraya handienetik txikienera:\n");
	for (i = 0; i < zenbakiak; i++){
		printf(">%i\n", arraya_desordenatuta[i]);
	}

}

void arraya_ordenatu(int arraya_desordenatuta[100], int arraya_ordenatuta[100], int zenbakiak){
	//aldagaiak	
	int i = 0;

	//programa
	for (i = 0; i < zenbakiak; i++){
		arraya_ordenatuta[i] = arraya_desordenatuta[zenbakiak - i-1];
	}
		
	printf("\nArraya txikienaetik handienera:\n");
	for (i = 0; i < zenbakiak; i++){
		printf(">%i\n", arraya_ordenatuta[i]);
	}

}