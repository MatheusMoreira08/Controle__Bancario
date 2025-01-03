/*Autor: Matheus G. M. de Oliveira
Grupo: Matheus G. M. de Oliveira - RA: 183958-2024
			Antônio Randolfo barroso neto - RA: 145287-2023
Data: 23/10/2024
Obj: Criação responsavel pelo "submenu", das movimentações financeiras.
*/

// para "incluir no arquivo que criamos"
#include "funcoes.h"

void movimentacao_contas(TipoLista_conta *L)
{
	// declarando as variaveis, padrao que ja fazemos
	int opcao;

	do
	{
		// chamando a tela
		tela();
		gotoxy(29, 03);
		printf(" - Movimento Financeiro -");
		// "serviços" disponiveis
		gotoxy(32, 10);
		printf("1 - Registrar Deposito");
		gotoxy(32, 12);
		printf("2 - Registrar Saque");
		gotoxy(32, 14);
		printf("3 - Consultar Movimentacao");
		gotoxy(32, 16);
		printf("4 - Voltar ao Menu");
		gotoxy(32, 07);
		printf("Digite a sua opcao: ");
		scanf("%d", &opcao);

		// opcoes que temos, ex se ele digitar 1 irá fazer o "case 1"
		switch (opcao)
		{
		case 1:
			// para registrar a entrada
			entrada_contas(L);
			break;
		case 2:
			// para registrar a saida
			saida_contas(L);
			break;
		case 3:
			// para consultar a movimentacao
			consultar_movimentacao(L);
			break;
		case 4:
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
	} while (opcao != 4);
}