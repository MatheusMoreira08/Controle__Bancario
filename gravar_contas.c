/*Autor: Matheus G. M. de Oliveira
Grupo: Matheus G. M. de Oliveira, Antonio Neto
Data: 15/11/2024
Obj: Criação da função responsavel por gravar informacões da lista simplesmente encadeada.
*/

#include "funcoes.h"

// grava informacoes da lista simplesmente encadeada
void gravar_contas(TipoLista_conta *L)
{
	TipoApontador_conta P;
	reg_contas reg_contas;
	FILE *ptr;
	char *filename = "Contas.dat";
	char *modo_gravacao = "wb";
	ptr = fopen(filename, modo_gravacao);
	tela();

	if (ptr == NULL)
	{
		printf("Erro ao abrir o arquivo");
		exit(1);
	}
	else
	{
		if (L->Primeiro == NULL)
		{
			printf("List invalida. Cadastre novas contas");
			getch();
		}
		else
		{
			P = L->Primeiro;
			while (P != NULL)
			{
				reg_contas = P->conteudo;
				fwrite(&reg_contas, sizeof(reg_contas), 1, ptr);
				P = P->proximo;
			}
			fclose(ptr);

			printf("Arquivo de contas bancarias gravadas com sucesso");
			getch();
		}
	}
}