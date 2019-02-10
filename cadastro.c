#include "cadastro.h"

void Imovel(int i, tImovel *imovel){
    printf("\n\n\t\t\xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4 Cadastro \xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
    printf("\n\n\t\t\tTitulo: ");
    fgets(imovel[i].titulo, MAX, stdin);

    printf("\t\t\tRua: ");
    fgets(imovel[i].rua, MAX, stdin);

    printf("\t\t\tCidade: ");
    fgets(imovel[i].cidade, MAX, stdin);

    printf("\t\t\tBairro: ");
    fgets(imovel[i].bairro, MAX, stdin);

    printf("\t\t\tNumero: ");
    scanf("%d", &imovel[i].num);

    printf("\t\t\tCEP: ");
    scanf("%d", &imovel[i].cep);

    printf("\t\t\tValor: ");
    scanf("%lf", &imovel[i].valor);

    Operacao:
        printf("\t\t\t0 - Alugar\n\t\t\t1 - Vender\n");
        printf("\t\t\tTipo de Opercao: ");
        scanf("%d", &imovel[i].operacao);
        if(imovel[i].operacao > 1 || imovel[i].operacao < 0){
            printf("\n\t\t\xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
            printf("\n\t\t\xb3\tOperecao Invalida, tente novamente!                              \xb3");
            printf("\n\t\t\xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9\n");
            goto Operacao;
        }
}

void Cadastro(int tipo, tImovel *imovel){
    int i;

    if(tipo == 1){
        for(i = 0; i < MAX_IMO; i++){
            if(imovel[i].casa.areaC == 0 && imovel[i].verif == FALSE){
                system("cls");

                imovel[i].verif = TRUE;

                char tipo[] = "CASA\n";
                strcpy(imovel[i].tipo, tipo);

                Imovel(i, imovel);

                printf("\t\t\tNumero de Pavimentos: ");
                scanf("%d", &imovel[i].casa.numPav);

                printf("\t\t\tNumero de Quartos: ");
                scanf("%d", &imovel[i].casa.numQuart);

                Area:
                    printf("\t\t\tArea do Terreno: ");
                    scanf("%lf", &imovel[i].casa.areaT);

                    printf("\t\t\tArea Construida: ");
                    scanf("%lf", &imovel[i].casa.areaC);

                    if(imovel[i].casa.areaC > imovel[i].casa.areaT){
                        printf("\n\t\t\xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
                        printf("\n\t\t\xb3\tA area Construida nao pode ser maior que a area do Terreno       \xb3");
                        printf("\n\t\t\xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9\n");
                        goto Area;
                    }
                break;
            }
        }
    }else if(tipo == 2){
        for(i = 0; i < MAX_IMO; i++){
            if(imovel[i].ap.area == 0 && imovel[i].verif == FALSE){
                system("cls");

                imovel[i].verif = TRUE;

                char tipo[] = "APARTAMENTO\n";
                strcpy(imovel[i].tipo, tipo);

                Imovel(i, imovel);

                printf("\t\t\tArea: ");
                scanf("%lf", &imovel[i].ap.area);

                printf("\t\t\tNumero de Quartos: ");
                scanf("%d", &imovel[i].ap.numQuart);
                getchar();

                printf("\t\t\tPosicao: ");
                fgets(imovel[i].ap.posicao, MAX, stdin);

                printf("\t\t\tAndar (0 - Terreo): ");
                scanf("%d", &imovel[i].ap.andar);

                printf("\t\t\tValor do Condominio: ");
                scanf("%lf", &imovel[i].ap.valorCon);

                printf("\t\t\tVagas na Garagem: ");
                scanf("%d", &imovel[i].ap.garagem);
                break;
            }
        }
    }else if(tipo == 3){
        for(i = 0; i < MAX_IMO; i++){
            if(imovel[i].ter.area == 0 && imovel[i].verif == FALSE){
                system("cls");

                imovel[i].verif = TRUE;

                char tipo[] = "TERRENO\n";
                strcpy(imovel[i].tipo, tipo);

                Imovel(i, imovel);

                printf("\t\t\tArea: ");
                scanf("%lf", &imovel[i].ter.area);
                break;
            }
        }
    }
    printf("\n\t\t\xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9\n");

    char op;
    printf("\n\n\t\tTem certeza de que quer CADASTRAR este imovel?\n\t\t1 - Sim\n\t\t0 - Nao\n\t\tDigite sua opcao: ");
    op = getch();

    if(op == '1'){
        Salvar(imovel);
    }
}
