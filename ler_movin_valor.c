/*Autor: Antonio Neto
Grupo: Matheus G. M. de Oliveira - RA: 183958-2024
			Antônio Randolfo barroso neto - RA: 145287-2023
Data: 15/11/2024
Obj: ler o valor da movimentacão
*/
#include "funcoes.h"

// ler valor da movimentacao

float ler_movin_valor(float vl_saldo, float vl_limite)
{
	float vl_movimentacao;
	float vl_total;
	vl_total = vl_saldo + vl_limite;
	do
	{
		// verificar se esta na posicao correta
		gotoxy(35, 19);
		printf("                                        ");
		gotoxy(35, 19);
		scanf("%f", &vl_movimentacao);

		if (vl_movimentacao < 0 || vl_movimentacao > vl_total)
		{
			printf("Valor da movimentacao invalido ou Saldo insuficiente ");
			gotoxy(07, 23);
			printf("																																		");
			getch();
		}
	} while (vl_movimentacao < 0 || vl_movimentacao > vl_total);
	return vl_movimentacao;
}