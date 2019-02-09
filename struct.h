#ifndef STRUCT_H_
#define STRUCT_H_
#define MAX 255
#define MAX_IMO 100
#define FALSE 0
#define TRUE 1

typedef struct {
    int numPav;
    int numQuart;
    double areaT;
    double areaC;
}tCasa;

typedef struct {
    double area;
    int numQuart;
    char posicao[MAX];
    int andar;
    double valorCon;
    int garagem;
}tAp;

typedef struct {
    double area;
}tTerr;

typedef struct{
    int verif;
    char tipo[MAX];
    char titulo[MAX];
    char rua[MAX];
    char cidade[MAX];
    char bairro[MAX];
    int num;
    int cep;
    double valor;
    int operacao;
    tCasa casa;
    tAp ap;
    tTerr ter;
}tImovel;

#endif // STRUCT_H_
