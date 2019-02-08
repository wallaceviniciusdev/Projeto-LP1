#include "busca.h"

void Maiusculo(char *string){
    int i;
    for(i = 0; i < string[i]; i++){
        string[i] = tolower(string[i]);
    }
}

void Listagem(tImovel *imovel){
    FILE *file;
    file = fopen("arquivo.txt", "a+");

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
            fscanf(file, "%lf %d %s %d %lf %d", &imovel[i].ap.area, &imovel[i].ap.numQuart, &imovel[i].ap.posicao, &imovel[i].ap.andar, &imovel[i].ap.valorCon, &imovel[i].ap.garagem);
        }
        i++;
    }

    fclose(file);
}

void Busca(int tipo, tImovel *imovel){
    int i;
    Listagem(imovel);

    if(tipo == 1){
        for(i = 0; i < MAX_IMO; i++){
            if(imovel[i].verif == TRUE){
                printf("VERIF: %d", imovel[i].verif);
                printf("%s", imovel[i].tipo);
                printf("Titulo: %s", imovel[i].titulo);
                printf("Rua: %s", imovel[i].rua);
                printf("Cidade: %s", imovel[i].cidade);
                printf("Bairro: %s", imovel[i].bairro);
                printf("Numero: %d\n", imovel[i].num);
                printf("CEP: %d\n", imovel[i].cep);
                printf("Valor: R$%.2lf\n", imovel[i].valor);
                printf("Operacao: %s\n", imovel[i].operacao ? "Venda" : "Aluguel");
                printf("\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\n");
            }
        }
    }
}
