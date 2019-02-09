#include "excluir.h"
#include "busca.h"
#include "salvar.h"

void Excluir(tImovel *imovel){
    int i, id = 0, op, flag = FALSE;

    char titulo[MAX];
    char tituloAnterior[MAX];

    printf("\n\n\t\t\xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4 Lista de Imoveis \xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
    printf("\n\t\t\xb3                                                      \xb3\n");
    for(i = 0; i < MAX_IMO; i++){
        if(imovel[i].verif == TRUE){
            printf("\t\t\tTitulo: %s", imovel[i].titulo);
            flag = TRUE;
        }
    }
    printf("\t\t\xb3                                                      \xb3");
    printf("\n\t\t\xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");

    if(flag){
        getchar();
        printf("\n\t\tDigite o TITULO do imovel que deseja editar: ");
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
    }else{
        printf("\n\t\t\xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
        printf("\n\t\t\xb3\tNenhum resultado encontrado                 \xb3");
        printf("\n\t\t\xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9\n");
    }
}
