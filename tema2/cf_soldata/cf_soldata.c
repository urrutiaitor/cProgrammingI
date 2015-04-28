#include <stdio.h>

float bez_kalkulatu_gabe(float lan_orduak, float orduko_soldata); //soldata bez gabe kalkulatzen du
float soldata_emateko(float lan_orduak, float orduko_soldata); //Soldata totala kalkulatzen du

int main(){
	//aldagaiak
	float emaitza = 0, lan_orduak = 0, orduko_soldata = 0;
	int segi = 1;

	//programa
	while (segi == 1){
		printf("Zenbat ordu lan egin dituzu?\n>");
		scanf("%f", &lan_orduak);
		printf("Zenbat diru jasotzen duzu orduko?\n>");
		scanf("%f", &orduko_soldata);

		emaitza = soldata_emateko(lan_orduak, orduko_soldata);
		printf("%.2f euro jaso behar dituzu\n>",emaitza);
		printf("Beste soldata bat galdetu nahi duzu? BAI(1)/EZ(0)\n>");
		scanf("%i", &segi);
	}

	//bukaera
	return 0;
}

float soldata_emateko(float lan_orduak, float orduko_soldata){ //Soldata totala kalkulatzen du(soldata jaso eta bez a jarri)
	//aldagaiak
	float soldata_totala = 0, bez_gabe = 0;

	//programa

	bez_gabe = bez_kalkulatu_gabe(lan_orduak, orduko_soldata);

	if (bez_gabe <= 200){
		soldata_totala = bez_gabe*1.1;
	}

	else{
		bez_gabe = bez_gabe - 200;
		soldata_totala = (bez_gabe*1.2) + (220);
	}

	//bukaera
	return soldata_totala;
}

float bez_kalkulatu_gabe(float lan_orduak, float orduko_soldata){
	//aldagaiak
	float soldata_bez_gabe = 0;

	//programa
	if (lan_orduak <= 50){
		soldata_bez_gabe = lan_orduak*orduko_soldata;
	}

	else{
		lan_orduak = lan_orduak - 40;
		soldata_bez_gabe = lan_orduak*orduko_soldata;
		soldata_bez_gabe = (soldata_bez_gabe * 1.5)+(40*orduko_soldata);
	}

	//amaiera
	return soldata_bez_gabe;

}