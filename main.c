#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

int main(){
    tImovel imovel[MAX_IMO];
    
    Inicializacao(imovel); //Inicializa valores estrategicos com 0 para marcar os espaços disponveis na lista
    Listagem(imovel); //Preenche a lista com os dados do arquivo
    Menu(imovel); // Chama a funcao e Menu
}
