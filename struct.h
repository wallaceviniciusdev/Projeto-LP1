#ifndef STRUCT_H_
#define STRUCT_H_
#define MAX 255
#include "clear.h"

typedef struct Casa{
	int pavimentos;
	int quartos;
	double areaT;
	double areaC;
}tCasa;

typedef struct Apartamento{
	double area;
	int quartos;
	char posicao[MAX];
	int andar;
	double condominio;
	int vagas;
}tAp;

typedef struct Terreno{
	double area;
}tTerreno;

typedef struct Imovel{
	char titulo[MAX];
	char rua[MAX];
	int numero;
	char bairro[MAX];
	int cep;
	char cidade[MAX];
	double valor;
	int operacao;
	int tipo;
	tCasa casa;
	tAp ap;
	tTerreno terreno;
}tImovel;

#endif