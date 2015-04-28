#include <stdio.h>

int zenbakien_digituak(int zenbaki_osoa);
int digitu_bakoitzaren_batuketa(int zenbaki_osoa);
int main(){
	//aldagaiak
	int zenbaki_osoa = 0, emaitza=0;

	//programa
	printf("Sartu kreditu txartelaren zenbakia\n");
	scanf("%i",&zenbaki_osoa);

	if (zenbaki_osoa < 0){
		printf("Errorea\n");
	}
	
	else{
		emaitza = zenbakien_digituak(zenbaki_osoa);
		if (emaitza = 1){
			emaitza = digitu_bakoitzaren_batuketa(zenbaki_osoa);
			if (emaitza==1){
				printf("Txartela egokia da\n");
			}
			else{
				printf("Errorea\n");
			}
		}
		else{
			printf("Errorea\n");
		}

	}

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}

int zenbakien_digituak(int zenbaki_osoa){
	//aldagaiak
	int digituak = 0, retemaitza=0;

	//programa
	while (zenbaki_osoa >= 10) {
		zenbaki_osoa = zenbaki_osoa / 10;
		digituak++;
	}
	if (digituak == 10){
		retemaitza = 1;
	}

	//amaiera
	return retemaitza;
}

int digitu_bakoitzaren_batuketa(int zenbaki_osoa){
	//aldagaiak
	int retemaitza = 0,batura=0,digitua=0,digitufinala=0;

	//programa
	while (zenbaki_osoa >= 10) {
		if (zenbaki_osoa > 999999999){
			digitufinala = zenbaki_osoa % 10;
		}
		zenbaki_osoa = zenbaki_osoa / 10;
		digitua = zenbaki_osoa % 10;
		batura = batura + digitua;

		if (digitufinala == batura){
			retemaitza = 1;
		}
	}

	//amaiera 0=EZ/1=BAI
	return retemaitza;


}