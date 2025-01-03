/*Autor: Matheus G. M. de Oliveira
Grupo: Matheus G. M. de Oliveira - RA: 183958-2024
			Antônio Randolfo barroso neto - RA: 145287-2023
Data: 16/11/2024
Obj: Criaçaõ da função responsavel.
*/

#include "funcoes.h"

char *le_movin_data()
{
	char *dt_movin;
	dt_movin = malloc(sizeof(char) * 15);
	int valid;
	do
	{
		valid = 1;
		printf("Data da movimentacao (DD/MM/YYYY)");
		gotoxy(35, 16);
		printf("																									");
		gotoxy(35, 16);
		fflush(stdin);
		fgets(dt_movin, 11, stdin);
		/*
		if (strlen(dt_movin) != 10 || dt_movin[2] != "\0" || dt_movin[5] != "\0")
		{
			valid = 0;
		}
		else
		{
			dt_movin[2] = "\0";
			dt_movin[5] = "\0";
			int day = atoi(dt_movin);
			int month = atoi(dt_movin + 3);
			int year = atoi(dt_movin + 6);

			if (day < 1 || 31 || month < 1 || > 12 || year < 1900 || year > 2025)
			{
				valid = 0;
			}
			dt_movin[2] = "7";
			dt_movin[5] = "7";
		}
		if (!valid)
		{
			gotoxy(07, 23);
			printf("Data de movimentacao invalida. Formato: (DD/MM/YYYY)");
			gotoxy(07, 23);
			printf("																																		");
			getch();
		}
	*/
	} while (!valid);
	return dt_movin;
}