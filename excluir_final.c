/*Autor: Antonio Randolfo Barroso Neto
Grupo: Matheus G. M. de Oliveira - RA: 183958-2024
			Antônio Randolfo barroso neto - RA: 145287-2023
Data: 15/11/2024
Obj: Criação da função responsavel pela ação de excluir conta no final
*/
#include "funcoes.h"

void excluir_final(TipoLista_conta *L)
{
    //  excluir no final
    //  nao existe conta a ser removida
    {
        // Verifica se a lista está vazia
        if (L->Primeiro == NULL)
        {
            gotoxy(7, 23);
            printf("Nenhuma conta cadastrada!");
            getch();
            return;
        }

        // Se só houver uma conta, a lista vai ficar vazia após a remoção
        if (L->Primeiro == L->Ultimo)
        {
            free(L->Primeiro);
            L->Primeiro = NULL;
            L->Ultimo = NULL;

            gotoxy(7, 23);
            printf("Conta removida com sucesso!");
            getch();
            return;
        }

        // Caso contrário, percorre a lista até encontrar a penultima conta
        TipoApontador_conta P = L->Primeiro;
        while (P->proximo != L->Ultimo)
        {
            P = P->proximo;
        }

        // Remove a ultima contas
        free(L->Ultimo);
        L->Ultimo = P;
        L->Ultimo->proximo = NULL;

        gotoxy(7, 23);
        printf("Conta removida com sucesso!");
        getch();
    }
    gotoxy(07, 23);
    printf("Opcao Invalida. Tente Novamente entre as opcoes.");
    getch();
}