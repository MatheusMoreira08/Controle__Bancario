/*Autor: Antonio Randolfo Barroso Neto
Grupo: Matheus G. M. de Oliveira - RA: 183958-2024
Antônio Randolfo barroso neto - RA: 145287-2023
Data: 15/11/2024
Obj: Criação da função responsavel pela consulta das contas por codigo
*/

#include "funcoes.h"

void consulta_codigo(TipoLista_conta *L)
{
    int resposta;
    do
    {
        TipoApontador_conta opc2;
        TipoApontador_conta P;
        int codigo;

        do
        {

            tela();
            gotoxy(30, 03);
            printf("- Consultar por Codigo -");

            // func para verificar se o codigo da conta foi cadastrado ou não
            gotoxy(30, 8);
            printf("Digite o codigo da conta: ");
            gotoxy(56, 8);
            scanf("%d", &codigo);
            opc2 = pesquisa_movi(L, codigo);

            if (opc2 == NULL && codigo != 0)
            {
                gotoxy(07, 23);
                printf("Conta nao cadastrada.");
                getch();
                // func para voltar menu
            }
        } while (opc2 == NULL || codigo != 0);

        if (codigo == 0) {
            return;
        }

        tela();
        telacadastro();

        gotoxy(41, 6);
        printf("%d", opc2->conteudo.codigo_conta);

        gotoxy(42, 8);
        printf(" %s", opc2->conteudo.banco);

        gotoxy(44, 10);
        printf(" %s", opc2->conteudo.agencia);

        gotoxy(52, 12);
        printf(" %s", opc2->conteudo.numero_conta);

        gotoxy(59, 14);
        printf(" %s", opc2->conteudo.tipo_conta);

        gotoxy(52, 16);
        printf("%.2lf", opc2->conteudo.vl_saldo);

        gotoxy(53, 18);
        printf("%.2lf", opc2->conteudo.vl_limite);

        gotoxy(53, 20);
        printf(" %s", opc2->conteudo.status);

        gotoxy(7, 23);
        printf("Pressione qualquer tecla para continuar.... ");
        getch();
    } while (resposta == 0);
}