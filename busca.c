#include "busca.h"

void Minisculo(char *string){
    int i;
    for(i = 0; i < string[i]; i++){
        string[i] = toupper(string[i]);
    }
}

void RemoverN(char *string){
    size_t ln = strlen(string) - 1;
    if (*string && string[ln] == '\n')
    string[ln] = '\0';
}

void Listagem(tImovel *imovel){
    FILE *file;
    file = fopen("arquivo.txt", "a+");

    if(!file){
        printf("O arquivo nao existe!\n");
    }

    int i = 0;

    while(!feof(file)){
        fscanf(file, "%d\n", &imovel[i].verif);
        fgets(imovel[i].tipo, MAX, file);
        fgets(imovel[i].titulo, MAX, file);
        fgets(imovel[i].rua, MAX, file);
        fgets(imovel[i].cidade, MAX, file);
        fgets(imovel[i].bairro, MAX, file);
        fscanf(file, "%d %d %lf %d", &imovel[i].num, &imovel[i].cep, &imovel[i].valor, &imovel[i].operacao);
        if(!strcmp(imovel[i].tipo, "TERRENO\n")){
            fscanf(file, "%lf", &imovel[i].ter.area);
        }else if(!strcmp(imovel[i].tipo, "CASA\n")){
            fscanf(file, "%d %d %lf %lf", &imovel[i].casa.numPav, &imovel[i].casa.numQuart, &imovel[i].casa.areaT, &imovel[i].casa.areaC);
        }else if(!strcmp(imovel[i].tipo, "APARTAMENTO\n")){
            fscanf(file, "%lf %d%*c\n", &imovel[i].ap.area, &imovel[i].ap.numQuart);
            fgets(imovel[i].ap.posicao, MAX, file);
            fscanf(file, "%d", &imovel[i].ap.andar);
            fscanf(file, "%lf %d", &imovel[i].ap.valorCon, &imovel[i].ap.garagem);
        }
        i++;
    }

    fclose(file);
}

void Todos(int i, tImovel *imovel){
    if(imovel[i].verif == TRUE){
        if(!strcmp("CASA\n", imovel[i].tipo)){
            printf("\n\n\t\t\xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
            printf("\n\t\t\xb3                         CASA                        \xb3");
            printf("\n\t\t\xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9\n");
        }else if(!strcmp("APARTAMENTO\n", imovel[i].tipo)){
            printf("\n\n\t\t\xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
            printf("\n\t\t\xb3                      APARTAMENTO                    \xb3");
            printf("\n\t\t\xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9\n");
        }else if(!strcmp("TERRENO\n", imovel[i].tipo)){
            printf("\n\n\t\t\xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
            printf("\n\t\t\xb3                        TERRENO                      \xb3");
            printf("\n\t\t\xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9\n");
        }
        printf("\t\t\tTitulo: %s", imovel[i].titulo);
        printf("\t\t\tRua: %s", imovel[i].rua);
        printf("\t\t\tCidade: %s", imovel[i].cidade);
        printf("\t\t\tBairro: %s", imovel[i].bairro);
        printf("\t\t\tNumero: %d\n", imovel[i].num);
        printf("\t\t\tCEP: %d\n", imovel[i].cep);
        printf("\t\t\tValor: R$%.2lf\n", imovel[i].valor);
        printf("\t\t\tOperacao: %s\n", imovel[i].operacao ? "Venda" : "Aluguel");
        if(!strcmp("CASA\n", imovel[i].tipo)){
            printf("\t\t\tNumero de Pavimentos: %d\n", imovel[i].casa.numPav);
            printf("\t\t\tNumero de Quartos: %d\n", imovel[i].casa.numQuart);
            printf("\t\t\tArea do Terreno: %.2lfm^2\n", imovel[i].casa.areaT);
            printf("\t\t\tArea Construida: %.2lfm^2\n", imovel[i].casa.areaC);
        }else if(!strcmp("APARTAMENTO\n", imovel[i].tipo)){
            printf("\t\t\tArea: %.2lfm^2\n", imovel[i].ap.area);
            printf("\t\t\tNumero de Quartos: %d\n", imovel[i].ap.numQuart);
            printf("\t\t\tPosicao: %s", imovel[i].ap.posicao);
            printf("\t\t\tAndar: %d\n", imovel[i].ap.andar);
            printf("\t\t\tValor do Condominio: R$%.2lf\n", imovel[i].ap.valorCon);
            printf("\t\t\tNumero de Vagas de Garagem: %d\n", imovel[i].ap.garagem);
        }else if(!strcmp("TERRENO\n", imovel[i].tipo)){
            printf("\t\t\tArea: %.2lfm^2\n", imovel[i].ter.area);
        }
        printf("\t\t\xb3                                                     \xb3\n");
        printf("\t\t\xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");
    }
}

void DisponiveisVenda(tImovel *imovel){
    int i, op;
    char tipo[MAX];

    TipoImovel:
        printf("\n\n\t\t\xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4 Venda \xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
        printf("\n\t\t\xb3                                            \xb3");
        printf("\n\t\t\xb3\t1. Casa                              \xb3");
        printf("\n\t\t\xb3\t2. Apartamento                       \xb3");
        printf("\n\t\t\xb3\t3. Terreno                           \xb3");
        printf("\n\t\t\xb3                                            \xb3");
        printf("\n\t\t\xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");
        printf("\n\t\tDigite o tipo de imovel: ");
        scanf("%d", &op);

    switch(op){
    case 1:
        strcpy(tipo, "CASA\n");
        break;
    case 2:
        strcpy(tipo, "APARTAMENTO\n");
        break;
    case 3:
        strcpy(tipo, "TERRENO\n");
        break;
    default:
        printf("\n\n\t\tEscolha invalida!\n\n");
        goto TipoImovel;
        break;
    }

    printf("\n\n");
    for(i = 0; i < MAX_IMO; i++){
        if(imovel[i].operacao && !strcmp(imovel[i].tipo, tipo)){
            Todos(i, imovel);
        }
    }
}

void DisponiveisAluguel(tImovel *imovel){
    int i, op;
    char tipo[MAX];

    TipoImovel:
        printf("\n\n\t\t\xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4 Venda \xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
        printf("\n\t\t\xb3                                            \xb3");
        printf("\n\t\t\xb3\t1. Casa                              \xb3");
        printf("\n\t\t\xb3\t2. Apartamento                       \xb3");
        printf("\n\t\t\xb3\t3. Terreno                           \xb3");
        printf("\n\t\t\xb3                                            \xb3");
        printf("\n\t\t\xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");
        printf("\n\t\tDigite o tipo de imovel: ");
        scanf("%d", &op);

    switch(op){
    case 1:
        strcpy(tipo, "CASA\n");
        break;
    case 2:
        strcpy(tipo, "APARTAMENTO\n");
        break;
    case 3:
        strcpy(tipo, "TERRENO\n");
        break;
    default:
        printf("\n\n\t\tEscolha invalida!\n\n");
        goto TipoImovel;
        break;
    }

    printf("\n\n");
    for(i = 0; i < MAX_IMO; i++){
        if(!imovel[i].operacao && !strcmp(imovel[i].tipo, tipo)){
            Todos(i, imovel);
        }
    }
}

void BuscaPorTitulo(tImovel *imovel){
    int i;
    char titulo[MAX];
    char tituloAnterior[MAX];

    getchar();
    printf("\n\n\t\tDigite o titulo que deseja buscar: ");
    fgets(titulo, MAX, stdin);
    RemoverN(titulo);
    Minisculo(titulo);

    for(i = 0; i < MAX_IMO; i++){
        strcpy(tituloAnterior, imovel[i].titulo);
        RemoverN(tituloAnterior);
        Minisculo(tituloAnterior);
        if(!strcmp(titulo, tituloAnterior)){
            Todos(i, imovel);
        }
    }
}

void BuscaPorBairro(tImovel *imovel){
    int i;
    char bairro[MAX];
    char bairroAnterior[MAX];

    getchar();
    printf("\n\n\t\tDigite o bairro que deseja buscar: ");
    fgets(bairro, MAX, stdin);
    RemoverN(bairro);
    Minisculo(bairro);

    for(i = 0; i < MAX_IMO; i++){
        strcpy(bairroAnterior, imovel[i].bairro);
        RemoverN(bairroAnterior);
        Minisculo(bairroAnterior);
        if(!strcmp(bairro, bairroAnterior)){
            Todos(i, imovel);
        }
    }
}

void ValorAcima(tImovel *imovel){
    int i;
    double valor;

    printf("\n\n\t\tDigite um valor: ");
    scanf("%lf", &valor);

    for(i = 0; i < MAX_IMO; i++){
        if(imovel[i].valor > valor){
            Todos(i, imovel);
        }
    }
}

void Busca(int tipo, tImovel *imovel){
    int i;
    if(tipo == 1){
        printf("\n\n");
        for(i = 0; i < MAX_IMO; i++){
            Todos(i, imovel);
        }
    }else if(tipo == 2){
        DisponiveisVenda(imovel);
    }else if(tipo == 3){
        DisponiveisAluguel(imovel);
    }else if(tipo == 4){
        BuscaPorTitulo(imovel);
    }else if(tipo == 5){
        BuscaPorBairro(imovel);
    }else if(tipo == 6){
        ValorAcima(imovel);
    }
}
