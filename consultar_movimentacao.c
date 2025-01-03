/*Autor: Matheus G. M. de Oliveira
Grupo: Matheus G. M. de Oliveira - RA: 183958-2024
			Antônio Randolfo barroso neto - RA: 145287-2023
Data: 21/11/2024
Obj: Criação da função responsavel pela consulta das movimentações já cadastradas.
*/

#include "funcoes.h"

void consultar_movimentacao(TipoLista_conta *L)
{
	// declarando as variaveis, padrao que ja fazemos
	int opcao;

	do
	{
		// chamando a tela
		tela();
		gotoxy(29, 03);
		printf(" - Consulta de Movimentacao -");
		// "serviços" disponiveis
		gotoxy(32, 10);
		printf("1 - Colsulta Geral");
		gotoxy(32, 12);
		printf("2 - Consulta por codigo");
		gotoxy(32, 14);
		printf("3 - Voltar ao Menu");
		gotoxy(32, 07);
		printf("Digite a sua opcao: ");
		scanf("%d", &opcao);

		// opcoes que temos, ex se ele digitar 1 irá fazer o "case 1"
		switch (opcao)
		{
		case 1:
			// para consultar todas as contas cadastradas
			//consultar_movi_geral(L);
			break;
		case 2:
			// para consultar por codigo
            //consulta_movi_codigo(L);
			break;
		case 3:
			// para voltar
			gotoxy(07, 23);
			printf("Voltando Menu");
			getch();
			break;
		// se caso o usuário digitar algo diferente de 4
		default:
			gotoxy(07, 23);
			printf("Opcao Invalida. Tente Novamente entre as opcoes.");
			getch();
			break;
		}
	} while (opcao != 3);

}