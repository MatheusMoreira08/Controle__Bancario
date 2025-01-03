/*Autor: Matheus G. M. de Oliveira
Grupo:  Matheus G. M. de Oliveira - RA: 183958-2024
			 Antônio Randolfo barroso neto - RA: 145287-2023
Obj: Criação da função responsavel pela inclusão das contas no final.
*/
#include "funcoes.h"

void incluir_final(TipoLista_conta *L)
{

	int resposta;

	do
	{
		reg_contas reg_contas;
		TipoApontador_conta P;
		TipoApontador_conta opc2;

		do
		{
			tela();
			telacadastro();
			opc2 = pesquisa(L, reg_contas.codigo_conta);
			if (opc2 != NULL)
			{
				gotoxy(07, 23);
				printf("Conta ja cadastrada");
				getch();
			}

		} while (opc2 != NULL);

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
		printf("Deseja gravar esses dados? 1 - Sim | 2 - Nao: ");
		scanf("%d", &resposta);

		// parte responsável por cadastrar o func no final
		if (resposta == 1)
		{
			// tenho que fazer isso pra criar o objeto
			P = (TipoApontador_conta)malloc(sizeof(TipoItem_conta));
			P->proximo = NULL;
			P->conteudo = reg_contas;

		
				if (L->Primeiro == NULL)
				{
					L->Primeiro = P;
					L->Ultimo = P;
				}
				else
				{
					L->Ultimo->proximo = P;
					L->Ultimo = P;
				}
			
			gotoxy(07, 23);
			printf("                                                      ");
			gotoxy(07, 23);
			printf("Conta cadastrada com sucesso!");
			getch();
		}

		gotoxy(07, 23);
		printf("                                                             ");
		gotoxy(07, 23);
		printf("Cadastrar outra conta 1 - | 2 - Nao: ");
		scanf("%d", &resposta);
	} while (resposta == 1);
}