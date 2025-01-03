/*Autor: Antonio neto
/RA:145287-2023
/Obj: escolha para excluir conta
*/
#include "funcoes.h"

void excluir_contas(TipoLista_conta *L)
{
	int opcao;

	do
	{
		// chamando a tela
		tela();
		gotoxy(32, 03);
		printf(" - Excluir Contas -");
		// "serviços" disponiveis
		gotoxy(32, 10);
		printf("1 - Excluir no Inicio");
		gotoxy(32, 12);
		printf("2 - Excluir na Posicao");
		gotoxy(32, 14);
		printf("3 - Excluir no Final");
		gotoxy(32, 16);
		printf("4 - Voltar");

		gotoxy(32, 07);
		printf("Digite a sua opcao: ");
		scanf("%d", &opcao);
		// opcoes que temos, ex se ele digitar 1 irá fazer o "case 1"
		switch (opcao)
		{
		case 1:
		{
			excluir_inicio(L);
			break;
		}
		case 2:
		{
			excluir_posicao(L);
			break;
		}
		case 3:
		{
			excluir_final(L);
			break;
		}
		case 4:
			// sair
			gotoxy(7, 23);
			printf("Voltando Submenu");
			getch();
			break;
		default:
			gotoxy(07, 23);
			printf("Opcao Invalida. Tente Novamente entre as opcoes.");
			getch();
			break;
		}
	} while (opcao != 4);
}