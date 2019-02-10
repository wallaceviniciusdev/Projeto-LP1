#include "menu.h"

void gotoxy(int x, int y){
    COORD coord;
    coord.X = x;
    coord.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void Carregando(){
    int r, q;

    system("cls");
    gotoxy(25, 4);
    printf("Carregando...");
    gotoxy(25, 5);
    for(r = 0; r < 20; r++){
        for(q = 0; q < 5000000; q++);
        printf("%c", 178);
    }
}

int Menu(tImovel *imovel){
    char opcao;
    system("cls");

    Inicio:
        printf("\n\n\t\t\xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4 Menu Principal \xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
        printf("\n\t\t\xb3                                            \xb3");
        printf("\n\t\t\xb3\t1. Cadastrar                         \xb3");
        printf("\n\t\t\xb3\t2. Buscar                            \xb3");
        printf("\n\t\t\xb3\t3. Editar                            \xb3");
        printf("\n\t\t\xb3\t4. Excluir                           \xb3");
        printf("\n\t\t\xb3\t0. Sair                              \xb3");
        printf("\n\t\t\xb3                                            \xb3");
        printf("\n\t\t\xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");
        printf("\n\t\tDigite sua opcao: ");
        opcao = getch();

        switch(opcao){
        case '1':
            Carregando();
            system("cls");
            printf("\n\n\t\t\xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4 Cadastrar \xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
            printf("\n\t\t\xb3                                            \xb3");
            printf("\n\t\t\xb3\t1. Casa                              \xb3");
            printf("\n\t\t\xb3\t2. Apartamento                       \xb3");
            printf("\n\t\t\xb3\t3. Terreno                           \xb3");
            printf("\n\t\t\xb3\t0. Voltar                            \xb3");
            printf("\n\t\t\xb3                                            \xb3");
            printf("\n\t\t\xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");
            printf("\n\t\tTipo de imovel para cadastar: ");
            opcao = getch();
            if(opcao == '1'){
                Carregando();
                system("cls");
                Cadastro(1, imovel);
                break;
            }else if(opcao == '2'){
                Carregando();
                system("cls");
                Cadastro(2, imovel);
                break;
            }else if(opcao == '3'){
                Carregando();
                system("cls");
                Cadastro(3, imovel);
                break;
            }else if(opcao == '0'){
                Carregando();
                system("cls");
                goto Inicio;
            }
            break;
        case '2':
            Carregando();
            system("cls");
            printf("\n\n\t\t\xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4 Buscar \xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
            printf("\n\t\t\xb3                                            \xb3");
            printf("\n\t\t\xb3\t1. Todos                             \xb3");
            printf("\n\t\t\xb3\t2. Disponiveis para Vender           \xb3");
            printf("\n\t\t\xb3\t3. Disponiveis para Alugar           \xb3");
            printf("\n\t\t\xb3\t4. Buscar por Titulo                 \xb3");
            printf("\n\t\t\xb3\t5. Buscar por Bairro                 \xb3");
            printf("\n\t\t\xb3\t6. Buscar acima de um valor          \xb3");
            printf("\n\t\t\xb3\t0. Voltar                            \xb3");
            printf("\n\t\t\xb3                                            \xb3");
            printf("\n\t\t\xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");
            printf("\n\t\tTipo de busca: ");
            opcao = getch();
            if(opcao == '0'){
                Carregando();
                system("cls");
                goto Inicio;
            }else if(opcao == '1'){
                Carregando();
                system("cls");
                Busca(1, imovel);
                break;
            }else if(opcao == '2'){
                Carregando();
                system("cls");
                Busca(2, imovel);
                break;
            }else if(opcao == '3'){
                Carregando();
                system("cls");
                Busca(3, imovel);
                break;
            }else if(opcao == '4'){
                Carregando();
                system("cls");
                Busca(4, imovel);
                break;
            }else if(opcao == '5'){
                Carregando();
                system("cls");
                Busca(5, imovel);
                break;
            }else if(opcao == '6'){
                Carregando();
                system("cls");
                Busca(6, imovel);
                break;
            }
            break;
        case '3':
            Carregando();
            system("cls");
            Editar(imovel);
            break;
        case '4':
            Carregando();
            system("cls");
            Excluir(imovel);
            break;
        case '0':
            return 1;
        }

        printf("\n\n\t\t1 - Fazer outra operacao\n\t\t0 - Sair\n\t\tDigite uma opcao: ");
        opcao = getch();
        if(opcao == '1'){
            Carregando();
            system("cls");
            goto Inicio;
        }
}