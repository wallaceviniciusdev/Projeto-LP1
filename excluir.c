#include "excluir.h"
#include "busca.h"
#include "salvar.h"

void Excluir(tImovel *imovel){
    int i, id = 0, op;

    char titulo[MAX];
    char tituloAnterior[MAX];

    printf("\n\n");
    for(i = 0; i < MAX_IMO; i++){
        if(imovel[i].verif == TRUE){
            printf("\t\tTitulo: %s", imovel[i].titulo);
            printf("\t\t\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\n");
        }
    }

    getchar();
    printf("\t\tDigite o TITULO do imovel que deseja editar: ");
    fgets(titulo, MAX, stdin);
    RemoverN(titulo);
    Minisculo(titulo);

    for(i = 0; i < MAX_IMO; i++){
        strcpy(tituloAnterior, imovel[i].titulo);
        RemoverN(tituloAnterior);
        Minisculo(tituloAnterior);

        if(!strcmp(tituloAnterior, titulo)){
            printf("Tem certeza de que quer apagar %s?\n1 - Sim\n0 - Nao\nDigite sua opcao: ", tituloAnterior);
            scanf("%d", &op);

            imovel[i].verif = FALSE;
            Salvar(imovel);
        }
    }
}
