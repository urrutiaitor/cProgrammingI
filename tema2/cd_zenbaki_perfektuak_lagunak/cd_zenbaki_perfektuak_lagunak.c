#include<stdio.h>

int perfektua(int zenb);
int lagunak(int zenb1, int zenb2);
void ngarren(int zenb);
int ZatitzaileenGehiketa(int zenb);

int main(){
	//aldagaiak
	int zenb = 0, perfect=0, i=1, lagun=0;
	//programa
	printf("sartu zenbat zenbaki ikusi nahi dituzun\n");
	scanf("%i", &zenb);
	ngarren(zenb);
	//bukaera
	printf("sakatu intro bukatzeko");
	fflush(stdin);
	getchar();
	return 0;
}

void ngarren(int zenb){
	int i = 0, perfect=0, lagun=0;
	//programa
	printf("lehen %i zenbaki perfektuak:\n", zenb);
	while (i <= zenb){
		perfect=perfektua(zenb);
		if (perfect == 1){
			printf("%i zenbakia perfektua da\n",i );
		}
		
		i++;
	}
	i = 1;
	printf("lehen %i zenbaki lagunak:\n", zenb);
	while (i <= zenb){
		lagun=laguna(zenb);
		printf("%i", lagun);
		i++;
	}
	
}

int ZatitzaileenGehiketa(int zenb){
	//aldagaiak
	int kont = 0, hondarra = 0, gehiketa = 0;
	//programa
	for (kont = 1; kont <= zenb / 2; kont++){
		hondarra = zenb%kont;
		if (hondarra == 0){
			gehiketa = gehiketa + kont;
		}
	}
	//bukaera
	return gehiketa;
}

int perfektua(int zenb){
	int  gehiketa=0, ret=0;
	//programa
	gehiketa = ZatitzaileenBatura(zenb);
	if (gehiketa == zenb){
		ret = 1;
	}
	return ret;
}

int laguna(int zenb, int zenb2){
	//aldagaiak
	int gehiketa = 0, ret = 0;
	gehiketa = ZatitzaileenBatura(zenb);
	if ( ( gehiketa  == zenb2) && ( zenb == ZatitzaileenBatura(zenb2 ))  ){
		ret = 1;
	}
	return ret;
}