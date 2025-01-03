/*Autor: Matheus G. M. de Oliveira
Grupo: Matheus G. M. de Oliveira - RA: 183958-2024
			Antônio Randolfo barroso neto - RA: 145287-2023
Data: 23/10/2024
Obj: Criação responsavel pela "tela de cadastro", as "perguntas".
*/

#include "funcoes.h"

// conta bancaria
void telacadastro()
{
	tela();
	gotoxy(33, 03);
	printf("- Incluir Contas - ");
	gotoxy(34, 06);
	printf("Codigo: ");
	gotoxy(32, 8);
	printf("1 - Banco: ");
	gotoxy(32, 10);
	printf("2 - Agencia: ");
	gotoxy(32, 12);
	printf("3 - Numero da Conta: ");
	gotoxy(32, 14);
	printf("4 - Tipo da Conta:(CC/CP): ");
	gotoxy(32, 16);
	printf("5 - Valor do Saldo: ");
	gotoxy(32, 18);
	printf("6 - Valor de Limite: ");
	gotoxy(32, 20);
	printf("7 - Status da Conta: ");
}