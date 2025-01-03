/*Autor: Matheus G. M. de Oliveira
Grupo: Matheus G. M. de Oliveira - RA: 183958-2024
			Antônio Randolfo barroso neto - RA: 145287-2023
Data: 16/11/2024
Obj: Criação da função responsavel para que a lista simplesmente encadeada seja ordena.
*/

#include "funcoes.h"

// funcao que ordena a lista simplesmente encadeada
void ordena_contas_alfa(TipoLista_conta *L)
{
	TipoApontador_conta P;
	TipoApontador_conta Q;

	reg_contas aux;
	P = L->Primeiro;
	while (P != NULL)
	{
		Q = P->proximo;
		while (Q != NULL)
		{
			if (strcmp(P->conteudo.banco, Q->conteudo.banco) > 0)
			{
				aux = P->conteudo;
				P->conteudo = Q->conteudo;
				Q->conteudo = aux;
			}
			Q = Q->proximo;
		}
		P = P->proximo;
	}
}