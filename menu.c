#include "menu.h"

int Opcoes(){
        int opcao;

    printf("\n\n\t\t\xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4 Menu Principal \xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
    printf("\n\t\t\xb3                                            \xb3");
    printf("\n\t\t\xb3\t1. Cadastrar                         \xb3");
    printf("\n\t\t\xb3\t2. Buscar                            \xb3");
    printf("\n\t\t\xb3\t3. Editar                            \xb3");
    printf("\n\t\t\xb3\t4. Excluir                           \xb3");
    printf("\n\t\t\xb3\t5. Salvar                            \xb3");
    printf("\n\t\t\xb3\t0. Sair                              \xb3");
    printf("\n\t\t\xb3                                            \xb3");
    printf("\n\t\t\xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");
    printf("\n\t\tDigite sua opcao: ");
    scanf("%d", &opcao);

    return opcao;
}

int Menu(){
    int opcao = Opcoes();
    int submenu;
    system("cls");
    switch(opcao){
    case 1:
        MenuCadastro:
            submenu = 1;
            printf("\n\n\t\t\xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4 Cadastrar \xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
            printf("\n\t\t\xb3                                            \xb3");
            printf("\n\t\t\xb3\t1. Casa                              \xb3");
            printf("\n\t\t\xb3\t2. Apartamento                       \xb3");
            printf("\n\t\t\xb3\t3. Terreno                           \xb3");
            printf("\n\t\t\xb3\t0. Voltar                            \xb3");
            printf("\n\t\t\xb3                                            \xb3");
            printf("\n\t\t\xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");
        break;
    case 2:
        submenu = 2;
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
        break;
    case 3:
        submenu = 3;
        printf("Editar");
        break;
    case 4:
        submenu = 4;
        printf("Excluir");
        break;
    case 5:
        submenu = 5;
        break;
    case 0:
        submenu = 0;
        break;
    }

    return submenu;
}
