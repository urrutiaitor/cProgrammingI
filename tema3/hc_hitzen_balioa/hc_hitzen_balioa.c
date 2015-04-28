#include <stdio.h>

int balioa_kalkulatu(char hitza[30]);
int balioak_konparatu(int balioa1, int balioa2);

int main(){
	//aldagaiak
	int balioa1 = 0, balioa2 = 0, emaitza = 0;
	char hitza[30] ;

	//programa
	printf("Sartu lehenengo hitza:\n");
	fflush(stdin);
	gets(hitza);
	balioa1 = balioa_kalkulatu(hitza);

	printf("Sartu bigarren hitza:\n");
	fflush(stdin);
	gets(hitza);
	balioa2 = balioa_kalkulatu(hitza);

	emaitza = balioak_konparatu(balioa1, balioa2);

	printf("%i\n", emaitza);

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}

int balioa_kalkulatu(char hitza[30]){
	//aldagaiak
	int balioa = 0, i = 0;

	//programa
	while ((hitza[i] != '\0')&&(i<30)){
		balioa = balioa + hitza[i];
	}

	//return
	return balioa;
}

int balioak_konparatu(int balioa1, int balioa2){
	//aldagaiak
	int emaitza = 0;

	//programa
	if (balioa1<balioa2){
		emaitza = -1;
	}
	if (balioa1==balioa2){
		emaitza = 0;
	}
	if (balioa1>balioa2){
		emaitza = 1;
	}
	//return
	return emaitza;
}