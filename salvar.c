#include "salvar.h"

void Salvar(tImovel *imovel){
    int op, i;
    FILE *file;
    file = fopen("arquivo.txt", "w");
    if(!file){
        printf("Erro ao abrir o arquivo!");
    }

    for(i = 0; i < MAX_IMO; i++){
        if(imovel[i].casa.areaC != 0 || imovel[i].ap.area != 0 || imovel[i].ter.area != 0){
            system("cls");
            fprintf(file, "%d\n", imovel[i].verif);
            fprintf(file, "%s", imovel[i].tipo);
            fprintf(file, "%s", imovel[i].titulo);
            fprintf(file, "%s", imovel[i].rua);
            fprintf(file, "%s", imovel[i].cidade);
            fprintf(file, "%s", imovel[i].bairro);
            fprintf(file, "%d\n", imovel[i].num);
            fprintf(file, "%d\n", imovel[i].cep);
            fprintf(file, "%.2lf\n", imovel[i].valor);
            fprintf(file, "%d\n", imovel[i].operacao);
            if(!strcmp("CASA\n", imovel[i].tipo)){
                fprintf(file, "%d\n", imovel[i].casa.numPav);
                fprintf(file, "%d\n", imovel[i].casa.numQuart);
                fprintf(file, "%.2lf\n", imovel[i].casa.areaT);
                fprintf(file, "%.2lf\n", imovel[i].casa.areaC);
            }else if(!strcmp("APARTAMENTO\n", imovel[i].tipo)){
                fprintf(file, "%.2lf\n", imovel[i].ap.area);
                fprintf(file, "%d\n", imovel[i].ap.numQuart);
                fprintf(file, "%s", imovel[i].ap.posicao);
                fprintf(file, "%d\n", imovel[i].ap.andar);
                fprintf(file, "%.2lf\n", imovel[i].ap.valorCon);
                fprintf(file, "%d\n", imovel[i].ap.garagem);
            }else if(!strcmp("TERRENO\n", imovel[i].tipo)){
                fprintf(file, "%.2lf\n", imovel[i].ter.area);
            }
        }
    }
    fclose(file);
}
