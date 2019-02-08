#include "excluir.h"
#include "busca.h"
#include "salvar.h"

void Excluir(tImovel *imovel){
    Listagem(imovel);

    int i, id = 1, op;

    for(i = 0; i < MAX_IMO; i++){
        if(imovel[i].verif == TRUE){
            printf("ID: %d | Titulo: %s", id, imovel[i].titulo);
            printf("\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\n");
            id++;
        }
    }

    printf("Digite o ID do imovel que deseja excluir: ");
    scanf("%d", &id);
    printf("Tem certeza de que quer apagar este imovel?\n1 - Sim\n0 - Nao: ", imovel[id-1].titulo);
    scanf("%d", &op);
    if(op == 1){
        imovel[id-1].verif = FALSE;
        Salvar(imovel);
        printf("ID: %d | Verif: %d\n", id-1, imovel[id-1].verif);
        return 5;
    }
}
