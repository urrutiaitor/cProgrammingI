#include <stdio.h>
#include <time.h>
#include <math.h>

#define MAX 	5
#define BOOLEAN	int
#define TRUE	1
#define FALSE	0

int main(void)
{
	int zenbIzkutua = 0;
	int zenb = 0;
	int saiakerak = 0;
	BOOLEAN  ezIgerria = TRUE;
	BOOLEAN  jarraitu = FALSE;

	while (jarraitu == TRUE){
		srand(time(0));
		zenbIzkutua = rand() % 100;
	}
	while (saiakerak < MAX && ezIgerria==TRUE)
	{
		printf("Zenbakia:\n");
		scanf("%i", &zenb);
		if (zenb == zenbIzkutua)
		{
			ezIgerria = FALSE;
		}
		else
		{
			if (zenb < zenbIzkutua)
			{
				printf("Handiagoa\n");
			}
			else
			{
				printf("Txikiagoa\n");
			}
			saiakerak = saiakerak + 1;
		}
	}
	if (ezIgerria == FALSE)
	{
		printf("Zorionak zenbaki izkutyyua igerri duzu\n;");
	}
	else
	{
		printf("Galdu egin duzu\n");
	}
	printf("Beste partida bat jolastea nahi duzu? 0(Ez) 1(Bai)?\n");
	scanf("%i", &jarraitu);
}