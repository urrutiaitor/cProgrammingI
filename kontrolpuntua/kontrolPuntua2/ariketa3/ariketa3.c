#include <stdio.h>

float segidako_atalak_batu(int x, int zenbatgarrena);
float segidako_atal_bakoitza(int x, int zenbatgarrena);
int faktoriala(int zenb);

int main(){
	//aldagaiak
	int radianak = 0,zenbatgarrena=1;
	float emaitza = 0;

	//programa
	printf("Sartu angelua\n");
	scanf("%i", &radianak);

	
	emaitza = segidako_atalak_batu(radianak, zenbatgarrena);

	printf("Emaitza: %.2f", emaitza);

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}

int faktoriala(int zenb){//zenbaki bat sartu eta programa honek bere faktoriala atera eta bueltatuko du.
	//aldagaiak
	int ret = 1, i = 0;
	//programa
	for (i = 1; i <= zenb; i++){
		ret = ret * i;
	}

	//amaiera
	return ret;
}

float segidako_atalak_batu(int x, int zenbatgarrena){
	//aldagaiak
	float ret = 0, i = 0;

	//programa
	for (i = 1; i <= 5; i++){

		ret = ret + segidako_atal_bakoitza(x, zenbatgarrena);
		zenbatgarrena = zenbatgarrena + 2;
	}
	//amaiera
	return ret;
}

float segidako_atal_bakoitza(int x, int zenbatgarrena){ //x aren baloreak eta zenbatgarren aldiz sartzen diren sartuko dira eta honek x-a zatiki barruan sartu, soluzionatu eta bueltan hemango du.
	//aldagaiak
	float ret = 0, goikoa = 0; int behekoa = 0, seinua = 0, i = 0; float zatikia = 0, berredura = 0;

	//programa
	if (zenbatgarrena%2 == 1){
		seinua = 1;
	}
	if (zenbatgarrena % 2 == 0){
		seinua = -1;
	}
	for (i = 1; i <= zenbatgarrena; i++){
		berredura = x*x;
	}
	goikoa = seinua*x;
	behekoa = faktoriala(zenbatgarrena);

	zatikia = goikoa / behekoa;

	//amaiera
	return ret;
}

//zatiki bakoitza batzeko lekura eramatean emaitza 0ra pasatzen da