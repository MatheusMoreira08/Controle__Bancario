/*Autor: Matheus G. M. de Oliveira
Grupo: Matheus G. M. de Oliveira - RA: 183958-2024
			Antônio Randolfo barroso neto - RA: 145287-2023
Data: 19/11/2024
Obj: Criação da função responsavel pela inclusão das contas na posição.
*/

#include "funcoes.h"

void incluir_posicao(TipoLista_conta *L)
{

	int resposta;

	do
	{
		reg_contas reg_contas;
		TipoApontador_conta P;
		TipoApontador_conta opc2;
		int posicao;
		int quantidade;
		int x;
		char sair;

		do
		{
			tela();
			telacadastro();
			gotoxy(07, 23);
			printf("                                              ");
			gotoxy(32, 03);
			printf("- Inserir na Posicao - ");
			gotoxy(07, 23);
			printf("Digite qual a posicao: ");
			scanf("%d", &posicao);
			quantidade = contador_contas(L);

			if (posicao > quantidade)
			{
				gotoxy(07, 23);
				printf("                                                ");
				gotoxy(07, 23);
				printf("Posicao invalida (sair / 0)");
				sair = getch();
				if (sair == '0')
				{
					return;
				}
			}
		} while (posicao > quantidade);
		if (sair == '0')
		{
			return;
		}

		gotoxy(42, 06);
		scanf("%d", &reg_contas.codigo_conta);

		gotoxy(43, 8);
		fflush(stdin);
		fgets(reg_contas.banco, 50, stdin);

		gotoxy(45, 10);
		fflush(stdin);
		fgets(reg_contas.agencia, 10, stdin);

		gotoxy(53, 12);
		fflush(stdin);
		fgets(reg_contas.numero_conta, 20, stdin);

		gotoxy(59, 14);
		fflush(stdin);
		fgets(reg_contas.tipo_conta, 20, stdin);

		gotoxy(52, 16);
		fflush(stdin);
		scanf("%lf", &reg_contas.vl_saldo);

		gotoxy(53, 18);
		fflush(stdin);
		scanf("%lf", &reg_contas.vl_limite);

		gotoxy(53, 20);
		fflush(stdin);
		fgets(reg_contas.status, 10, stdin);

		// pergunta se quer cadastrar esses dados ou não
		gotoxy(07, 23);
		printf("Deseja gravar esses dados 1 - Sim | 2 - Nao: ");
		scanf("%d", &resposta);
		if (resposta == 1)
		{

			opc2 = L->Primeiro;
			for (x = 1; x <= posicao - 2; x++)
			{
				opc2 = opc2->proximo;
			}

			P->proximo = opc2->proximo;
			opc2->proximo = P;

			gotoxy(07, 23);
			printf("                                                      ");
			gotoxy(07, 23);
			printf("Conta cadastrada com sucesso!");
			getch();
		}

		// Pergunta se deseja cadastrar outra conta
		gotoxy(07, 23);
		printf("                                                   ");
		gotoxy(07, 23);
		printf("Cadastrar outra conta 1 - Sim | 2 - Nao: ");
		scanf("%d", &resposta);

	} while (resposta == 1);
}