/*Autor: Matheus G. M. de Oliveira
Grupo: Matheus G. M. de Oliveira - RA: 183958-2024
			Antônio Randolfo barroso neto - RA: 145287-2023
Data: 13/11/2024
Obj: Criando a função responsavel pela alteração das contas .
*/

#include "funcoes.h"
void alterar_contas(TipoLista_conta *L)
{
	reg_contas reg_contas;
	TipoApontador_conta opc2;
	int resposta;
	int campo;

	do
	{
		do
		{

			tela();
			telacadastro();
			gotoxy(33, 03);
			printf("- Alterar Contas -");
			gotoxy(42, 6);
			scanf("%d", &reg_contas.codigo_conta);
			opc2 = pesquisa(L, reg_contas.codigo_conta);
			if (opc2 == NULL)
			{
				gotoxy(07, 23);
				printf("Conta nao cadastrada.");
				getch();
			}
		} while (opc2 == NULL);
		reg_contas = opc2->conteudo;
		// mostrar o registro do Conta
		gotoxy(43, 8);
		printf("%s", opc2->conteudo.banco);
		gotoxy(45, 10);
		printf("%s", opc2->conteudo.agencia);
		gotoxy(68, 14);
		printf("%.2s", opc2->conteudo.numero_conta);
		gotoxy(52, 16);
		printf("%s", opc2->conteudo.tipo_conta);
		gotoxy(53, 18);
		printf("%.2f", opc2->conteudo.vl_saldo);
		gotoxy(53, 20);
		printf("%.2f", opc2->conteudo.vl_limite);
		gotoxy(53, 12);
		printf("%s", opc2->conteudo.status);
		do
		{
			do
			{
				gotoxy(07, 23);
				printf("                                                       ");
				gotoxy(07, 23);
				printf("Digite o Campo a Ser Alterado 0 = Sair: ");
				scanf("%d", &campo);
				gotoxy(07, 23);
				printf("                                                       ");
				if (campo < 0 || campo > 7)
				{
					gotoxy(07, 23);
					printf("                                                   ");
					gotoxy(07, 23);
					printf("Campo Invalido");
					getch();
				}
			} while (campo < 0 || campo > 7);

			switch (campo)
			{
			case 1:
				gotoxy(42, 8);
				printf("                          ");
				gotoxy(43, 8);
				fflush(stdin);
				fgets(reg_contas.banco, 50, stdin);
				break;
			case 2:
				gotoxy(44, 10);
				printf("                          ");
				gotoxy(44, 10);
				fflush(stdin);
				fgets(reg_contas.agencia, 10, stdin);
				break;
			case 3:
				gotoxy(53, 12);
				printf("                          ");
				gotoxy(52, 12);
				fflush(stdin);
				fgets(reg_contas.numero_conta, 20, stdin);
				break;
			case 4:
				gotoxy(67, 14);
				printf("                          ");
				gotoxy(59, 14);
				fflush(stdin);
				fgets(reg_contas.tipo_conta, 20, stdin);
				break;
			case 5:
				gotoxy(51, 16);
				printf("                          ");
				gotoxy(51, 16);
				fflush(stdin);
				scanf("%lf", &reg_contas.vl_saldo);
				break;
			case 6:
				gotoxy(53, 18);
				printf("                          ");
				gotoxy(52, 18);
				fflush(stdin);
				scanf("%lf", &reg_contas.vl_limite);
				break;
			case 7:
				gotoxy(53, 20);
				printf("                          ");
				gotoxy(52, 20);
				fflush(stdin);
				fgets(reg_contas.status, 10, stdin);
				break;
			}
		} while (campo != 0);
		// confirmando a alteraçao
		gotoxy(07, 23);
		printf("Confirma a Alteracao 1 = Sim | 2 = Nao: ");
		scanf("%d", &resposta);
		gotoxy(07, 23);
		printf("                                                       ");
		if (resposta == 1)
		{
			opc2->conteudo = reg_contas;
		}

		gotoxy(07, 23);
		printf("Deseja alterar outro 1 = Sim | 2 = Nao: ");
		scanf("%d", &resposta);
		gotoxy(07, 23);
		printf("                                                       ");
	} while (resposta == 1);
}