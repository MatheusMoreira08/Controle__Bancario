/*Autor: Matheus G. M. de Oliveira
Grupo: Matheus G. M. de Oliveira - RA: 183958-2024
    Antônio Randolfo barroso neto - RA: 145287-2023
Data: 26/11/2024
Obj: Criação da função responsavel pela consulta das contas por codigo
*/

#include "funcoes.h"
/*
void consulta_movi_codigo(TipoLista_conta *L)
{
    int resposta;
    do
    {
        TipoApontador_conta p = L->Primeiro;
        TipoApontador_conta opc2;
        TipoApontador_conta P;
        reg_contas reg_contas;

        do
        {

            tela();
            gotoxy(30, 03);
            printf("- Consultar por Codigo -");

            // func para verificar se o codigo da conta foi cadastrado ou não
            gotoxy(30, 8);
            printf("Digite o codigo da conta: ");
            gotoxy(56, 8);
            scanf("%d", &reg_contas.codigo_conta);
            opc2 = pesquisa_movi(L, reg_contas.codigo_conta);

            if (opc2 == NULL)

            {
                gotoxy(07, 23);
                printf("Conta nao cadastrada.");
                getch();
                // func para voltar menu
            }
        } while (resposta == 1);

        tela();


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
    } while (resposta == 0);
}
*/