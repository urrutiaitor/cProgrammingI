#include <stdio.h>

int bitarretik_hamartarrera(int zenbakiabitarrean);
int zenbaki_onargarria(int zenbakia);
int zero_bat_konprobaketa(int digitu);
int main(){
	//aldagaiak
	int zenbakiabitarrean = 0, segi = 0, emaitza = 0,seg=0;

	//programa
	printf("Sartu zenbakia bitarrean");
	scanf("%i", &zenbakiabitarrean);
	segi = zenbaki_onargarria(zenbakiabitarrean);
	if (segi == 1){
		emaitza = bitarretik_hamartarrera(zenbakiabitarrean);
		
		seg = zenbaki_onargarria(emaitza);
		if (seg >= 0){
			printf("%i hamartarrean %i da", zenbakiabitarrean, emaitza);
		}
		else{
			printf("Errorea");

		}

	}
	else{
		printf("Errorea. Zenbakia negatiboa da");
	}



	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}

int zero_bat_konprobaketa(int digitu){ // digitu bat sartuko da funtzio honetan eta funtzioak emaitz bezala 0 edo 1 hemango du. 1 emango du digitu hori 0 edo 1 bada eta 9 emango du digitu hori egokia ez bada.
	//aldagaiak
	int ret = 0;

	//programa

	if (digitu == 0 || digitu == 1){
		ret = 1;
	}

	//bukaera
	return ret;
}

int zenbaki_onargarria(int zenbakia){ //zenbakia positiboa den konprobatu. Sartu zenbakia eta 1(BAI) edo 0(EZ) eterako du.
	//aldagaiak
	int ret = 0;
	
	//programa
	if (zenbakia >= 0){
		ret = 1;
	}

	//amaiera
	return ret;
}

int bitarretik_hamartarrera(int zenbakiabitarrean){//zenbakia bitarrean sartu eta funtzio honek hamartarrean bueltatuko du zenbakia

	//aldagaiak
	int d1, d2, d3, d4, d5,ret=-1;

	//programa
	d1= zenbakiabitarrean % 10;
	zenbakiabitarrean = zenbakiabitarrean / 10;
	d2 = zenbakiabitarrean % 10;
	zenbakiabitarrean = zenbakiabitarrean / 10;
	d3 = zenbakiabitarrean % 10;
	zenbakiabitarrean = zenbakiabitarrean / 10;
	d4 = zenbakiabitarrean % 10;
	zenbakiabitarrean = zenbakiabitarrean / 10;
	d5 = zenbakiabitarrean % 10;

	if ((d1 == 0 || d1 == 1)&&(d2 == 0 || d2 == 1)&&(d3 == 0 || d3 == 1)&&(d4 == 0 || d4 == 1)&&(d5 == 0 || d5 == 1)){
		ret = (d1 * 16) + (d2 * 8) + (d3 * 4) + (d4 * 2) + (d5);

	}
	 
	
	//amaiera
	return ret;

}

//ez dago guztiz ondo baina ez dut izan denborarik
//-1 denenan emaitza hori agertzen da baina ez du erroerea ematen
//hasierako zenbakia ez doa guztiz ondo