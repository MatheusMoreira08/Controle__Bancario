/*Autor: Matheus G. M. de Oliveira

Grupo: Matheus G. M. de Oliveira - RA: 183958-2024

			Antônio Randolfo barroso neto - RA: 145287-2023

Data: 15/11/2024

Obj: Criação da função responsavel pela entrada de movimentações financeiras das contas.

*/

// NÃO COMPLETO

// para "incluir no arquivo que criamos"

#include "funcoes.h"

void entrada_contas(TipoLista_conta *L)

{

	int resposta;

	do
	{
		reg_contas reg_contas;
		TipoApontador_conta opc2;
		float valor;

		do
		{

			tela();
			gotoxy(31, 03);
			printf("- Deposito em contas -");

			// func para verificar se o codigo da conta foi cadastrado ou não
			gotoxy(30, 8);
			printf("Digite o codigo da conta: ");
			gotoxy(56, 8);
			scanf("%d", &reg_contas.codigo_conta);
			opc2 = pesquisa_movi(L, reg_contas.codigo_conta);

			if (opc2 == NULL)

			{
				gotoxy(07, 23);
				printf("Conta nao cadastrada.");
				getch();
			}

		} while (opc2 == NULL);

		gotoxy(30, 10);
		printf("Digite o banco da conta: ");
		gotoxy(55, 10);
		fflush(stdin);

		fgets(reg_contas.banco, 50, stdin);

		gotoxy(30, 12);
		printf("Digite o numero da conta: ");
		gotoxy(56, 12);
		fflush(stdin);
		fgets(reg_contas.numero_conta, 20, stdin);

		gotoxy(30, 14);
		printf("Digite o valor do deposito: ");
		scanf("%f", &valor);

		gotoxy(07, 23);
		printf("Deseja gravar essa movimentacao? 1 - Sim | 2 - Nao: ");
		scanf("%d", &resposta);
		
		if (resposta == 1)
		{

			gotoxy(07, 23);
			printf("                                                              ");
			gotoxy(07, 23);
			printf("Deposito feito com sucesso!");
			scanf("%d", &resposta);
		}

		gotoxy(07, 23);
		printf("                                                                  ");
		gotoxy(07, 23);
		printf("Registrar outro deposito 1 - | 2 - Nao: ");
		scanf("%d", &resposta);

	} while (resposta == 1);
}