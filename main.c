#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "cadastro.h"
#include "busca.h"
#include "salvar.h"

tImovel imovel[MAX_IMO];

int main(){
    int i, opcao;

    for(i = 0; i < MAX_IMO; i++){
        imovel[i].verif = FALSE;
        imovel[i].casa.areaC = 0;
        imovel[i].ap.area = 0;
        imovel[i].ter.area = 0;
    }

    Inicio:
        opcao = Menu();
        switch(opcao){
        case 0:
            system("cls");
            goto Inicio;
            break;
        case 1:
            printf("\n\t\tTipo de imovel para cadastar: ");
            scanf("%d", &opcao);
            if(opcao == 1){
                system("cls");
                Cadastro(1, &imovel);
                break;
            }else if(opcao == 2){
                system("cls");
                Cadastro(2, &imovel);
                break;
            }else if(opcao == 3){
                system("cls");
                Cadastro(3, &imovel);
                break;
            }else if(opcao == 0){
                system("cls");
                goto Inicio;
            }
        case 2:
            printf("\n\t\tTipo de busca: ");
            scanf("%d", &opcao);
            if(opcao == 0){
                system("cls");
                goto Inicio;
            }else if(opcao == 1){
                system("cls");
                Busca(1, imovel);
            }else if(opcao == 2){
                system("cls");
                //Busca(2);
            }else if(opcao == 3){
                system("cls");
                //Busca(3);
            }else if(opcao == 4){
                system("cls");
                //Busca(4);
            }else if(opcao == 5){
                system("cls");
                //Busca(5);
            }else if(opcao == 6){
                system("cls");
                //Busca(6);
            }
            break;
        case 3:
            system("cls");
            //Editar();
            break;
        case 4:
            system("cls");
            Excluir(imovel);
            break;
        case 5:
            system("cls");
            Salvar(imovel);
            break;
        }

        int op;
        printf("1 - Fazer outra operacao\n0 - Sair\nDigite uma opcao: ");
        scanf("%d", &op);
        if(op == 1){
            system("cls");
            goto Inicio;
        }else if(op == 0){
            return 0;
        }
}
