// bibliotecas necessárias
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <locale.h>
#include <conio.h>

// para "incluir no arquivo que criamos"
#include "funcoes.h"

void submenu(TipoLista_conta *L)
{
	// declarando as variaveis, padrao que ja fazemos
	int opcao;

	do
	{
		// chamando a tela
		tela();
		gotoxy(32, 03);
		printf("- Sistema de Contas -");
		// "serviços" disponiveis
		gotoxy(32, 10);
		printf("1 - Incluir Conta");
		gotoxy(32, 12);
		printf("2 - Alterar Conta");
		gotoxy(32, 14);
		printf("3 - Consultar Conta");
		gotoxy(32, 16);
		printf("4 - Remover Conta");
		gotoxy(32, 18);
		printf("5 - Voltar ao Menu");
		gotoxy(32, 07);
		printf("Digite a sua opcao: ");
		scanf("%d", &opcao);
		// opcoes que temos, ex se ele digitar 1 irá fazer o "case 1"
		switch (opcao)
		{
		case 1:
			// para incluir a conta
			incluir_contas(L);
			break;
		case 2:
			// para alterar a conta
			alterar_contas(L);
			break;
		case 3:
			// para consultar a conta
			submenu_consulta(L);
			break;
		case 4:
			excluir_contas(L);
			break;
		case 5:
			gotoxy(07, 23);
			printf("Voltando Menu");
			getch();
			break;
		default:
			gotoxy(07, 23);
			printf("Opcao Invalida. Tente Novamente entre as opcoes.");
			getch();
			break;
		}

	} while (opcao != 5);
}