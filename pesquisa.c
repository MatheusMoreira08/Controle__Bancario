/*Autor: Antonio Neto
Grupo: Matheus G. M. de Oliveira - RA: 183958-2024
	Antônio Randolfo barroso neto - RA: 145287-2023
Data: 15/11/24
Obj : Fazer a "Validacao dos codigos das contas, se foram registrados ou não"
*/
#include "funcoes.h"

TipoApontador_conta pesquisa(TipoLista_conta *L, int codigo_conta)
{
	TipoApontador_conta opc2 = L->Primeiro;
	while (opc2 != NULL)
	{
		if (opc2->conteudo.codigo_conta == codigo_conta)
		{
			return opc2;
		}
		opc2 = opc2->proximo;
	}
	return NULL;
}