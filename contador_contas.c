/*Autor: Matheus G. M. de Oliveira
Grupo: Matheus G. M. de Oliveira - RA: 183958-2024
			Antônio Randolfo barroso neto - RA: 145287-2023
Data: 15/11/2024
Obj: Criação da função responsavel pela ação de contas quantas contas já cadastradas
tem na lista.
*/

#include "funcoes.h"

// func que conta quantas contas tem na list
int contador_contas(TipoLista_conta *L)
{
	TipoApontador_conta aux;
	int cont = 0;
	aux = L->Primeiro;
	while (aux != NULL)
	{
		aux = aux->proximo;
		cont++;
	}
	return cont;
}