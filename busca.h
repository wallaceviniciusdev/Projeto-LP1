#ifndef BUSCA_H_
#define BUSCA_H_
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include "struct.h"
#include "menu.h"
#include <string.h>
#include <ctype.h>

void Minisculo(char *string);
void RemoverN(char *string);
void Busca(int tipo, tImovel *imovel);
void Todos(int i, tImovel *imovel);
void Listagem(tImovel *imovel);
void DisponiveisVenda(tImovel *imovel);
void DisponiveisAluguel(tImovel *imovel);
void BuscaPorTitulo(tImovel *imovel);
void BuscaPorBairro(tImovel *imovel);
void ValorAcima(tImovel *imovel);

#endif // BUSCA_H_
