// bibliotecas necessárias
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <locale.h>
#include <conio.h>
#include "funcoes.h"

// construção da tela
void tela()
{
	int lin;
	int col;

	// se a biblioteca correta não for declarada o system cls não ira funcionar "stdlib. h". Sua função é limpar a tela de saída
	system("cls");
	// para definir a cor da tela
	system("color 5F");

	// usando o gotoxy para posicionar corretamente os caracteres e formar uma tela mais xuxuzinha
	for (lin = 1; lin < 25; lin++)
	{
		gotoxy(1, lin);
		printf("|");
		gotoxy(79, lin);
		printf("|");
	}

	for (col = 1; col < 80; col++)
	{
		gotoxy(col, 1);
		printf("-");
		gotoxy(col, 4);
		printf("-");
		gotoxy(col, 22);
		printf("-");
		gotoxy(col, 24);
		printf("-");
	}

	gotoxy(1, 1);
	printf("+");
	gotoxy(79, 1);
	printf("+");

	gotoxy(1, 4);
	printf("+");
	gotoxy(79, 4);
	printf("+");

	gotoxy(1, 22);
	printf("+");
	gotoxy(79, 22);
	printf("+");

	gotoxy(34, 2);
	printf("SISTEMA BANCARIO");
	gotoxy(3, 3);
	printf("UNICV | 2A ESW ");
	gotoxy(3, 2);
	printf("ESTRUTURA DE DADOS");
	gotoxy(63, 2);
	printf("Matheus Moreira | ");
	gotoxy(65, 3);
	printf("Antonio Neto ");
	gotoxy(2, 23);
	printf("MSG: ");
}