/*Autor: Matheus G. M. de Oliveira
Grupo: Matheus G. M. de Oliveira - RA: 183958-2024
			Antônio Randolfo barroso neto - RA: 145287-2023
Data: 21/11/2024
Obj: Criação da função responsavel por inverter as datas.
*/

#include <string.h>
/*
char *inverte_data(char *dt_data)
{

// as linhas abaixo intertem a data para o formato: AAAA/MM/DD
char *dt_data_inv;
dt_data_inv = malloc(sizeof(char) * 11);
strcpy(dt_data_inv, dt_data);
char dia[3], mes[3], ano[5];

// extrair dia, mes e ano da string origial
strcpy(dia, dt_data_inv, 2);
dia[2] = "\0";
strcpy(ano, dt_data_inv + 3, 2);
mes[2] = "\0";
strcpy(ano, dt_data_inv + 6, 4);
ano[4] = "\0";

// formatar a nova data no formato AAAA/MM/DD
sprintf(dt_data_inv, "%s/%s/%s", ano, mes, dia);

return dt_data_inv;


return NULL;

}
*/