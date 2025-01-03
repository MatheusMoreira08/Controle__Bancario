/*Autor: Matheus G. M. de Oliveira
Grupo: Matheus G. M. de Oliveira - RA: 183958-2024
			 Antônio Randolfo barroso neto - RA: 145287-2023
Data: 15/11/2024
Obj: Criação da função responsavel pela consulta das contas já cadastradas.
*/

#include "funcoes.h"

void consultar_contas(TipoLista_conta *L)
{

  TipoApontador_conta p = L->Primeiro;

    while (p != NULL)
    {

        tela();
        telacadastro();

        gotoxy(41, 6);
        printf("%d", p->conteudo.codigo_conta);

        gotoxy(42, 8);
        printf(" %s", p->conteudo.banco);

        gotoxy(44, 10);
        printf(" %s", p->conteudo.agencia);

        gotoxy(52, 12);
        printf(" %s", p->conteudo.numero_conta);

        gotoxy(59, 14);
        printf(" %s", p->conteudo.tipo_conta);

        gotoxy(52, 16);
        printf("%.2lf", p->conteudo.vl_saldo);

        gotoxy(53, 18);
        printf("%.2lf", p->conteudo.vl_limite);

        gotoxy(53, 20);
        printf(" %s", p->conteudo.status);

        gotoxy(7, 23);
        printf("Pressione qualquer tecla para continuar.... ");
        getch();
        p = p->proximo;
    }
}