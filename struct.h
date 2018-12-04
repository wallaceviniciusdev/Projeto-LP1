#ifndef STRUCT_H_
#define STRUCT_H_
#define MAX 255

typedef struct Casa{
	int pavimentos;
	int quartos;
	double areaT;
	double areaC;
};

typedef struct Apartamento{
	double area;
	int quartos;
	char posicao[MAX];
	int andar;
	double condominio;
	int vagas;
};

typedef struct Terreno{
	double area;
};

typedef struct Imovel{
	int id;
	char titulo[MAX];
	char rua[MAX];
	int numero;
	char bairro[MAX];
	int cep;
	char cidade[MAX];
	double valor;
	int tipo;
	Casa casa;
	Apartamento ap;
	Terreno terreno;
};

#endif