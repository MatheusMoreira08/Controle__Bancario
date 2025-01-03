#ifndef FUNCOES_H
#define FUNCOES_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <locale.h>
#include <conio.h>

// estrutura de dados da conta bancaria
typedef struct
{
	int codigo_conta;
	char banco[50];
	char agencia[10];
	char status[10];
	char numero_conta[20];
	char tipo_conta[20];
	double vl_saldo;
	double vl_limite;
} reg_contas;

// Estrutura dos "Serviços"
typedef struct
{
	int sequencial;
	int codigo_conta;
	char data_movimento[11];
	char tipo_movimento[15];
	double valor_movimento;
	double valor_saldo;
} reg_movimentos;

// é um ponteiro de conta
typedef struct TipoItem_conta *TipoApontador_conta;

typedef struct TipoItem_conta
{
	reg_contas conteudo;
	TipoApontador_conta proximo;
} TipoItem_conta;

// uma estrutura com dois campos
typedef struct TipoLista_conta
{
	TipoApontador_conta Primeiro;
	TipoApontador_conta Ultimo;
} TipoLista_conta;

// e um ponteiro de movimentação
typedef struct TipoItem_Movimentacao *TipoApontador_Movimentacao;

typedef struct TipoItem_Movimentacao
{
	TipoApontador_Movimentacao anterior;
	TipoApontador_Movimentacao proximo;
	reg_contas conteudo;
} TipoItem_Movimentacao;

typedef struct TipoLista_movimentacao
{
	TipoApontador_Movimentacao Primeiro;
	TipoApontador_Movimentacao Ultimo;
} TipoLista_movimentacao;

// função para posicionar o cursor
void gotoxy(int x, int y);

// funcao da tela
void tela();

// funcao da tela de cadastro
void telacadastro();


// funcao para alterar as contas
void alterar_contas(TipoLista_conta *L);


// funcao para consultar conta - 1
void consultar_contas(TipoLista_conta *L);

//funcao submenu para consultar conta - 2
void submenu_consulta(TipoLista_conta *L);

//funcao para consultar por codigo - 3 
void consulta_codigo(TipoLista_conta *L);

// funcao para entrada da parte de movimentacao
void entrada_contas(TipoLista_conta *L);

// funcao para excluir as contas - 1
void excluir_contas(TipoLista_conta *L);

//funcao excluir no inicio - 2
void excluir_inicio(TipoLista_conta *L);

//funcao excluir na posicao - 3 
void excluir_posicao(TipoLista_conta *L);

//funcao excluir no final - 4
void excluir_final(TipoLista_conta *L);

// funcao para incluir contas - 1
void incluir_contas(TipoLista_conta *L);

// funcao de cadastrar no inicio - 2
void incluir_inicio(TipoLista_conta *L);

// funcao de cadastrar no final - 3
void incluir_final(TipoLista_conta *L);

// funcao de cadastrar na posicao - 4
void incluir_posicao(TipoLista_conta *L);

// funcao para saida da parte de movimentacao
void saida_contas(TipoLista_conta *L);

// funcao do sub menu
void submenu(TipoLista_conta *L);

// funcao da tela de movimentacao
void movimentacao_contas(TipoLista_conta *L);

// func que conta quantas contas tem na list
int contador_contas(TipoLista_conta *L);

// funcao que ordena a lista simplesmente encadeada
void ordena_contas_alfa(TipoLista_conta *L);

// para restaurar
void restaurar_contas(TipoLista_conta *L);

// grava informacoes da lista simplesmente encadeada
void gravar_contas(TipoLista_conta *L);

// pesquisa codigo da conta
TipoApontador_conta pesquisa(TipoLista_conta *L, int codigo_conta);

// pesquisa codigo da conta foi criada para usar *M
TipoApontador_conta pesquisa_movi(TipoLista_conta *L, int codigo_conta);

// le nome do banco
char *le_conta_banco();

// le o nome da agencia
char *le_conta_agencia();

// le o numero da conta
char *le_conta_numero();

// le o tipo da conta
char *le_conta_tipo();

// le o saldo da conta
float le_conta_saldo();

// le o limite da conta
float le_conta_limite();

// funcao para ler movimentacao
float ler_movin_valor(float vl_saldo, float vl_limite);

// funcao de consultar movimentaçãos
void consultar_movimentacao(TipoLista_conta*L);

//consultar movimentacao por codigo
void consulta_movi_codigo(TipoLista_conta *L);

// funcao criada para inverter a data
char *inverte_data(char *dt_data);

#endif