#include "editar.h"

void Editar(tImovel *imovel){
    int i, flag = FALSE;

    char string[MAX];
    int inteiro;
    double decimal;

    char titulo[MAX];
    char tituloAnterior[MAX];

    for(i = 0; i < MAX_IMO; i++){
        if(imovel[i].verif == TRUE){
            flag = TRUE;
        }
    }

    if(flag){
        printf("\n\n\t\t\xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4 Lista de Imoveis \xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
        printf("\n\t\t\xb3                                                      \xb3\n");
        for(i = 0; i < MAX_IMO; i++){
            if(imovel[i].verif == TRUE){
                printf("\t\t\tTitulo: %s", imovel[i].titulo);
            }
        }
        printf("\t\t\xb3                                                      \xb3");
        printf("\n\t\t\xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");
        printf("\n\t\tDigite o TITULO do imovel que deseja editar: ");
        fgets(titulo, MAX, stdin);
        RemoverN(titulo);
        Minisculo(titulo);

        for(i = 0; i < MAX_IMO; i++){
            if(titulo == "0"){
                break;
            }
            strcpy(tituloAnterior, imovel[i].titulo);
            RemoverN(tituloAnterior);
            Minisculo(tituloAnterior);

            if(!strcmp(tituloAnterior, titulo)){
                printf("\n\n\t\tIMOVEL A EDITAR:\n\n");
                Todos(i, imovel);

                printf("\n\t\tDigite um novo Titulo: ");
                fgets(string, MAX, stdin);
                strcpy(imovel[i].titulo, string);

                printf("\t\tDigite uma nova Rua: ");
                fgets(string, MAX, stdin);
                strcpy(imovel[i].rua, string);

                printf("\t\tDigite uma nova Cidade: ");
                fgets(string, MAX, stdin);
                strcpy(imovel[i].cidade, string);

                printf("\t\tDigite um novo Bairro: ");
                fgets(string, MAX, stdin);
                strcpy(imovel[i].bairro, string);

                printf("\t\tDigite um novo Numero: ");
                scanf("%d", &inteiro);
                imovel[i].num = inteiro;

                printf("\t\tDigite um novo CEP: ");
                scanf("%d", &inteiro);
                imovel[i].cep = inteiro;

                printf("\t\tDigite um novo Valor: ");
                scanf("%lf", &decimal);
                imovel[i].valor = decimal;

                Operacao:
                    printf("\t\t0 - Alugar\n\t\t1 - Vender\n");
                    printf("\t\tDigite uma nova Operacao: ");
                    scanf("%d", &inteiro);
                    imovel[i].operacao = inteiro;

                    if(imovel[i].operacao > 1 || imovel[i].operacao < 0){
                        printf("\n\t\t\xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
                        printf("\n\t\t\xb3\tOperecao Invalida, tente novamente!                              \xb3");
                        printf("\n\t\t\xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9\n");
                        goto Operacao;
                    }

                if(!strcmp("CASA\n", imovel[i].tipo)){
                    printf("\t\tDigite um novo Numero de Pavimentos: ");
                    scanf("%d", &inteiro);
                    imovel[i].casa.numPav = inteiro;

                    printf("\t\tDigite um novo Numero de Quartos: ");
                    scanf("%d", &inteiro);
                    imovel[i].casa.numQuart = inteiro;

                    Area:
                        printf("\t\tDigite uma nova Area do Terreno: ");
                        scanf("%lf", &decimal);
                        imovel[i].casa.areaT = decimal;

                        printf("\t\tDigite uma nova Area Construida: ");
                        scanf("%lf", &decimal);
                        imovel[i].casa.areaC = decimal;

                        if(imovel[i].casa.areaC > imovel[i].casa.areaT){
                            printf("\n\t\t\xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
                            printf("\n\t\t\xb3\tA area Construida nao pode ser maior que a area do Terreno       \xb3");
                            printf("\n\t\t\xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9\n");
                            goto Area;
                        }
                }else if(!strcmp("APARTAMENTO\n", imovel[i].tipo)){
                    printf("\t\tDigite uma nova Area: ");
                    scanf("%lf", &decimal);
                    imovel[i].ap.area = decimal;

                    printf("\t\tDigite um novo Numero de Quartos: ");
                    scanf("%d", &inteiro);
                    imovel[i].ap.numQuart = inteiro;

                    getchar();
                    printf("\t\tDigite uma nova Posicao: ");
                    fgets(string, MAX, stdin);
                    strcpy(imovel[i].ap.posicao, string);

                    printf("\t\tDigite um novo Andar (0 - Terreo): ");
                    scanf("%d", &inteiro);
                    imovel[i].ap.andar = inteiro;

                    printf("\t\tDigite um novo Valor do Condominio: ");
                    scanf("%lf", &decimal);
                    imovel[i].ap.valorCon = decimal;

                    printf("\t\tDigite um novo Numero de Vagas de Garagem: ");
                    scanf("%d", &inteiro);
                    imovel[i].ap.garagem = inteiro;
                }else if(!strcmp("TERRENO\n", imovel[i].tipo)){
                    printf("\t\tDigite uma nova Area: ");
                    scanf("%lf", &decimal);
                    imovel[i].ter.area = decimal;
                }

                char op;
                printf("\n\n\t\tTem certeza de que quer editar este imovel?\n\t\t1 - Sim\n\t\t0 - Nao\n\t\tDigite sua opcao: ");
                op = getch();

                if(op == '1'){
                    Salvar(imovel);
                }
            }else{
                printf("\n\t\t\xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
                printf("\n\t\t\xb3\tNenhum resultado encontrado                 \xb3");
                printf("\n\t\t\xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9\n");
                break;
            }
        }
    }else{
        printf("\n\t\t\xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
        printf("\n\t\t\xb3\tNenhum resultado encontrado                 \xb3");
        printf("\n\t\t\xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9\n");
    }
}
