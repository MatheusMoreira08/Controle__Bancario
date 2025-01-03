/*Autor: Matheus G. M. de Oliveira
Grupo: Matheus G. M. de Oliveira - RA: 183958-2024
			Antônio Randolfo barroso neto - RA: 145287-2023
Data: 16/11/2024
Obj: Criação da função responsavel por restauras as contas bancarias.
*/

#include "funcoes.h"

void restaurar_contas(TipoLista_conta *L)
{
    reg_contas reg_contas;
    FILE *ptr;
    char *arquivo = "folha.dat";
    char *modo_leitura = "rb"; // Modo de leitura binária

    ptr = fopen(arquivo, modo_leitura);

    // Inicializando a lista
    L->Primeiro = NULL;
    L->Ultimo = NULL;

    // Verificando se o arquivo foi aberto corretamente
    if (ptr == NULL)
    {
        printf("Nenhum arquivo encontrado. Não há contas cadastradas.\n");
        return; // Retorna caso o arquivo não seja encontrado
    }

    // Lendo as contas do arquivo e populando a lista
while (fread(&reg_contas, sizeof(reg_contas), 1, ptr) == 1)
    {
        // Alocando memória para o novo nó
        TipoApontador_conta p = (TipoApontador_conta)malloc(sizeof(TipoItem_conta));
        if (p == NULL)
        {
            printf("Erro ao alocar memória para nova conta.\n");
            fclose(ptr);
            return;
        }

        // Atribuindo os dados do registro lido para o nó
        p->conteudo = reg_contas;
        p->proximo = NULL;

        // Inserindo o nó na lista
        if (L->Primeiro == NULL)
        {
            // Se a lista estiver vazia, o novo nó será o primeiro e último
            L->Primeiro = p;
            L->Ultimo = p;
        }
        else
        {
            // Se já houver elementos na lista, o novo nó será inserido no final
            L->Ultimo->proximo = p;
            L->Ultimo = p;
        }
    }

    // Fechando o arquivo
    fclose(ptr);

    // Mensagem de sucesso
    tela();
    gotoxy(25, 13);
    printf("Arquivo lido com sucesso!");
    gotoxy(6,23);
    printf("Pressione qualquer tecla para continuar...");
    getch();
}