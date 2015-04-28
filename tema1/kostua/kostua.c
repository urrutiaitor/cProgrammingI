#include <stdio.h>

int main(){

	//aldagaiak
	int  kostua, irabazia, bez, totala, sobera;

	kostua = 0;
	bez = 0;
	totala = 0;
	sobera = 0;
	//programa
	printf ("Zein da produktuaren kostua zentimotan ?");
	scanf ("%i", &kostua);

	irabazia = (kostua * 0.1);

	bez = (kostua * 0.07);

	totala = (kostua + irabazia + bez);

	sobera = totala % 5;

	if (sobera <= 2);
	{
		totala = (totala - sobera);
	}
	if ( sobera >= 3);
	{
		totala = ((totala + 5) - sobera);
	}
	printf("%i zentimokoa izango da salmenta prezioa\n",totala);

	//bukaera
	printf("Sakatu tekla bat bukatzeko...\n");
	fflush(stdin);
	getchar();
	return 0;
}



