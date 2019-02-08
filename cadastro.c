#include "cadastro.h"

void Cadastro(int tipo, tImovel *imovel){
    int i;

    if(tipo == 1){
        for(i = 0; i < MAX_IMO; i++){
            if(imovel[i].casa.areaC == 0 && imovel[i].verif == FALSE){
                system("cls");

                imovel[i].verif = TRUE;

                char tipo[] = "CASA";
                strcpy(imovel[i].tipo, tipo);
                getchar();

                printf("\n\n\t\tTitulo: ");
                fgets(imovel[i].titulo, MAX, stdin);

                printf("\t\tRua: ");
                fgets(imovel[i].rua, MAX, stdin);

                printf("\t\tCidade: ");
                fgets(imovel[i].cidade, MAX, stdin);

                printf("\t\tBairro: ");
                fgets(imovel[i].bairro, MAX, stdin);

                printf("\t\tNumero: ");
                scanf("%d", &imovel[i].num);

                printf("\t\tCEP: ");
                scanf("%d", &imovel[i].cep);

                printf("\t\tValor: ");
                scanf("%lf", &imovel[i].valor);

                printf("\t\t0 - Alugar\n\t\t1 - Vender\n");
                printf("\t\tTipo de Opercao: ");
                scanf("%d", &imovel[i].operacao);

                printf("\t\tNumero de Pavimentos: ");
                scanf("%d", &imovel[i].casa.numPav);

                printf("\t\tNumero de Quartos: ");
                scanf("%d", &imovel[i].casa.numQuart);

                Area:
                    printf("\t\tArea do Terreno: ");
                    scanf("%lf", &imovel[i].casa.areaT);

                    printf("\t\tArea Construida: ");
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

                char tipo[] = "APARTAMENTO";
                strcpy(imovel[i].tipo, tipo);
                getchar();

                printf("\n\n\t\tTitulo: ");
                fgets(imovel[i].titulo, MAX, stdin);

                printf("\t\tRua: ");
                fgets(imovel[i].rua, MAX, stdin);

                printf("\t\tCidade: ");
                fgets(imovel[i].cidade, MAX, stdin);

                printf("\t\tBairro: ");
                fgets(imovel[i].bairro, MAX, stdin);

                printf("\t\tNumero: ");
                scanf("%d", &imovel[i].num);

                printf("\t\tCEP: ");
                scanf("%d", &imovel[i].cep);

                printf("\t\tValor: ");
                scanf("%lf", &imovel[i].valor);

                printf("\t\t0 - Alugar\n\t\t1 - Vender\n");
                printf("\t\tTipo de Opercao: ");
                scanf("%d", &imovel[i].operacao);

                printf("\t\tArea: ");
                scanf("%lf", &imovel[i].ap.area);

                printf("\t\tNumero de Quartos: ");
                scanf("%d", &imovel[i].ap.numQuart);
                getchar();

                printf("\t\tPosicao: ");
                fgets(imovel[i].ap.posicao, MAX, stdin);

                printf("\t\tAndar: ");
                scanf("%d", &imovel[i].ap.andar);

                printf("\t\tValor do Condominio: ");
                scanf("%lf", &imovel[i].ap.valorCon);

                printf("\t\tVagas na Garagem: ");
                scanf("%d", &imovel[i].ap.garagem);
                break;
            }
        }
    }else if(tipo == 3){
        for(i = 0; i < MAX_IMO; i++){
            if(imovel[i].ter.area == 0 && imovel[i].verif == FALSE){
                system("cls");

                imovel[i].verif = TRUE;

                char tipo[] = "TERRENO";
                strcpy(imovel[i].tipo, tipo);
                getchar();

                printf("\n\n\t\tTitulo: ");
                fgets(imovel[i].titulo, MAX, stdin);

                printf("\t\tRua: ");
                fgets(imovel[i].rua, MAX, stdin);

                printf("\t\tCidade: ");
                fgets(imovel[i].cidade, MAX, stdin);

                printf("\t\tBairro: ");
                fgets(imovel[i].bairro, MAX, stdin);

                printf("\t\tNumero: ");
                scanf("%d", &imovel[i].num);

                printf("\t\tCEP: ");
                scanf("%d", &imovel[i].cep);

                printf("\t\tValor: ");
                scanf("%lf", &imovel[i].valor);

                printf("\t\t0 - Alugar\n\t\t1 - Vender\n");
                printf("Tipo de Opercao: ");
                scanf("%d", &imovel[i].operacao);

                printf("\t\tArea: ");
                scanf("%lf", &imovel[i].ter.area);
                break;
            }
        }
    }
}
