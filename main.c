#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "menu.h"

tImovel imovel[MAX_IMO];

int main(){
    int i, opcao;            

    //Inicializa valores estrategicos com 0 para marcar os espaços disponveis na lista
    for(i = 0; i < MAX_IMO; i++){
        imovel[i].verif = FALSE;
        imovel[i].casa.areaC = 0;
        imovel[i].ap.area = 0;
        imovel[i].ter.area = 0;
    }

    Listagem(imovel); //Preenche a lista com os dados do arquivo
    Menu(imovel);
}
