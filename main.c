/*Grupo: Matheus G. M. de Oliveira - RA: 183958-2024
		Antônio Randolfo barroso neto - RA: 145287-2023
Data: 23/10/2024
Obj: Sistema Bancario.
*/

// bibliotecas necessárias
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <locale.h>
#include <conio.h>

// para "incluir no arquivo que criamos"
#include "funcoes.h"

// programa principal
int main()
{
	// declarando as variaveis, padrao que ja fazemos
	int opcao;
	TipoLista_conta L;
	L.Primeiro = NULL;
	L.Ultimo = NULL;

	do
	{
		// chamando a tela
		tela();
		gotoxy(32, 03);
		printf(" - Menu principal -");
		// "serviços" disponiveis
		gotoxy(32, 10);
		printf("1 - Cadastro de Conta");
		gotoxy(32, 12);
		printf("2 - Movimentacao Financeira");
		gotoxy(32, 14);
		printf("3 - Sair");
		gotoxy(32, 07);
		printf("Digite a sua opcao: ");
		scanf("%d", &opcao);
		// opcoes que temos, ex se ele digitar 1 irá fazer o "case 1"
		switch (opcao)
		{
		case 1:
			submenu(&L);
			break;
		case 2:
			// para movimentacao das contas
			movimentacao_contas(&L);
			break;
		case 3:
			gotoxy(07, 23);
			printf("Saindo do programa...");
			getch();
			break;
			// se caso o usuário digitar algo diferente de 3
		default:
			gotoxy(06, 23);
			printf("Opcao Invalida. Tente Novamente entre as opcoes.");
			getch();
			break;
		}
	} while (opcao != 3);

gravar_contas(&L);
//restaurar_contas(&L);
	return 0;
}