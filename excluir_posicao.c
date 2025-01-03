/*Autor: Antonio Randolfo Barroso Neto
Grupo: Matheus G. M. de Oliveira - RA: 183958-2024
			Antônio Randolfo barroso neto - RA: 145287-2023
Data: 15/11/2024
Obj: Criação da função responsavel pela ação de excluir conta na posicao
*/
#include "funcoes.h"

void excluir_posicao(TipoLista_conta *L)
{
    // Verifica se a lista está vazia
    if (L->Primeiro == NULL)
    {
        gotoxy(7, 23);
        printf("Nenhuma conta cadastrada!");
        getch();
        return;
    }

    int posicao, i;
    TipoApontador_conta P, anterior;

    gotoxy(7, 23);
    printf("Digite a posicao da Conta: ");
    scanf("%d", &posicao);

    // Verifica se a posição é válida
    if (posicao < 1 || posicao > contador_contas(L))
    {
        gotoxy(7, 23);
        printf("                                     ");
        gotoxy(7, 23);
        printf("Posicao invalida!");
        getch();
        return;
    }

    P = L->Primeiro;

    // Se for remover a primeira conta
    if (posicao == 1)
    {
        L->Primeiro = P->proximo;
        if (L->Primeiro == NULL) // Se só houver um elemento
        {
            L->Ultimo = NULL;
        }
        free(P);
    }
    else
    {
        // Percorrer até o elemento da posição desejada
        for (i = 1; i < posicao; i++)
        {
            anterior = P;
            P = P->proximo;
        }

        // Remove a conta na posição

        anterior->proximo = P->proximo;
        if (P == L->Ultimo) // Se for o último elemento
        {
            L->Ultimo = anterior;
        }
        free(P);
    }

    gotoxy(7, 23);
    printf("Conta removida com sucesso!");
    getch();
}