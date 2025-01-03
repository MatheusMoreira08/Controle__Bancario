/*Autor: Antonio neto
Grupo:  Matheus G. M. de Oliveira - RA: 183958-2024
			 Antônio Randolfo barroso neto - RA: 145287-2023
/Objetivo: incluir conta no comeco no final e na posicão
*/
#include "funcoes.h"

// para cadastrar o funcionario no final
void incluir_contas(TipoLista_conta *L)
{
	int opcao;

	do
	{

		tela();
		gotoxy(32, 03);
		printf("- Incluindo Contas - ");
		// "serviços" disponiveis
		gotoxy(32, 10);
		printf("1 - Incluir no Inicio");
		gotoxy(32, 12);
		printf("2 - Incluir na Posicao");
		gotoxy(32, 14);
		printf("3 - Incluir no Final");
		gotoxy(32, 16);
		printf("4 - Voltar");
		gotoxy(32, 07);
		printf("Digite a sua opcao: ");
		scanf("%d", &opcao);

		// Se a lista está vazia, o Primeiro e último funcionário são o mesmo
		switch (opcao)
		{
		case 1:
			// parte responsável por cadastrar a conta no inicio
			incluir_inicio(L);
			break;
		case 2:
			// parte responsável por cadastrar a conta na posicao
			incluir_posicao(L);
			break;
		case 3:
			// parte responsável por cadastrar a conta no final
			incluir_final(L);
			break;
		case 4:
			// sair
			gotoxy(7, 23);
			printf("Voltando Submenu");
			getch();
			break;
		default:
			gotoxy(06, 23);
			printf("Opcao Invalida. Tente Novamente entre as opcoes.");
			getch();
			break;
		}
	} while (opcao != 4);
	perror("e:");
}