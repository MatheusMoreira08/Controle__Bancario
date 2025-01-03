/*Autor: Antonio Randolfo Barroso Neto
Grupo: Matheus G. M. de Oliveira - RA: 183958-2024
			Antônio Randolfo barroso neto - RA: 145287-2023
Data: 15/11/2024
Obj: Criação da função responsavel pela ação de excluir conta no inicio
*/
#include "funcoes.h"

void excluir_inicio(TipoLista_conta *L)
{
    // verificar se a lista esta vazia
    if (L->Primeiro == NULL)
    {
        gotoxy(7, 23);
        printf("Nenhuma conta cadastrada!");
        getch();
        return;
    }

    // Se só houver uma conta, a lista ficará vazia após a remoção
    if (L->Primeiro == L->Ultimo)
    {
        free(L->Primeiro);
        L->Primeiro = NULL;
        L->Ultimo = NULL;
    }
    else
    {
        // Remove a primeira conta
        TipoApontador_conta temp = L->Primeiro;
        L->Primeiro = L->Primeiro->proximo;
        free(temp);
    }

    gotoxy(7, 23);
    printf("Conta removida com sucesso!");
    getch();
}