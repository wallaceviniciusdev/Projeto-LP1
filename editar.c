#include "editar.h"

void EditarImovel(tImovel *imovel, int indice, FILE *arquivo){

	char op;

	printf("ID DO ITEM: %d\n", indice);
	printf("----------------\n");
	printf("Titulo: %s\n", imovel[indice].titulo);
	printf("----------------\n");

	printf("Você tem certeza de que quer editar este item? (s/n): ");
	scanf("%c%*c", &op);

	clear(); //limpa a tela

	if(op == 's' || op == 'S'){
		printf("ID DO ITEM: %d\n", indice);
		printf("----------------\n");
		printf("Bairro: %s\n", imovel[indice].bairro);
		printf("CEP: %d\n", imovel[indice].cep);
		printf("Cidade: %s\n", imovel[indice].cidade);
		printf("Valor: R$%.2lf\n", imovel[indice].valor);
		printf("----------------\n");

		printf("Titulo Atual: %s\n", imovel[indice].titulo);
		printf("Novo Título: ");
		fgets(imovel[indice].titulo, MAX, stdin);
		clear();

		printf("Rua Atual: %s\n", imovel[indice].rua);
		printf("Nova Rua: ");
		fgets(imovel[indice].rua, MAX, stdin);
		clear();

		printf("Número Atual: %d\n", imovel[indice].numero);
		printf("Novo Número: ");
		scanf("%d%*c", imovel[indice].numero);
		clear();

		printf("Bairro Atual: %s\n", imovel[indice].bairro);
		printf("Novo Bairro: ");
		fgets(imovel[indice].bairro, MAX, stdin);
		clear();

		printf("CEP Atual: %s\n", imovel[indice].cep);
		printf("Novo CEP: ");
		scanf("%d%*c", imovel[indice].cep);
		clear();

		printf("Cidade Atual: %s\n", imovel[indice].cidade);
		printf("Nova Cidade: ");
		fgets(imovel[indice].cidade, MAX, stdin);
		clear();

		printf("Valor Atual: R$%s\n", imovel[indice].valor);
		printf("Novo Valor: ");
		scanf("%lf%*c", imovel[indice].valor);

		/*if(imovel[indice].operacao == 1){
			char operacao[] = "Alugar";
		}else if(imovel[indice].operacao == 2){
			char operacao[] = "Venda";
		}

		printf("Operação Atual: %s\n", operacao);
		printf("Novo Operação (1 - Alugar | 2 - Vender): ");
		scanf("%d%*c", imovel[indice].operacao);
		clear();*/

		switch(imovel[indice].tipo){
			case 1:
				printf("Pavimentos Atual: %d\n", imovel[indice].casa.pavimentos);
				printf("Novo número de Pavimentos: ");
				scanf("%d%*c", imovel[indice].casa.pavimentos);
				clear();

				printf("Quartos Atual: %d\n", imovel[indice].casa.quartos);
				printf("Novo número de Quartos: ");
				scanf("%d%*c", imovel[indice].casa.quartos);
				clear();

				printf("Quartos Atual: %.2lfm²\n", imovel[indice].casa.areaT);
				printf("Nova Área do Terreno: ");
				scanf("%lf%*c", imovel[indice].casa.areaT);
				clear();

				printf("Quartos Atual: %.2lfm²\n", imovel[indice].casa.areaC);
				printf("Nova Área Construída: ");
				scanf("%lf%*c", imovel[indice].casa.areaC);
				clear();

				break;
			case 2:
				printf("Área Atual: %.2lfm²\n", imovel[indice].ap.area);
				printf("Nova Área: ");
				scanf("%lf%*c", imovel[indice].ap.area);
				clear();

				printf("Quartos Atual: %d\n", imovel[indice].ap.quartos);
				printf("Novo número de Quartos: ");
				scanf("%d%*c", imovel[indice].ap.quartos);
				clear();

				printf("Posição Atual: %s\n", imovel[indice].ap.posicao);
				printf("Nova Posição: ");
				fgets(imovel[indice].ap.posicao, MAX, stdin);
				clear();

				printf("Andar Atual: %d\n", imovel[indice].ap.andar);
				printf("Novo Andar: ");
				scanf("%d%*c", imovel[indice].ap.andar);
				clear();

				printf("Condomínio Atual: R$%.2lf\n", imovel[indice].ap.condominio);
				printf("Novo valor de Condomínio: ");
				scanf("%lf%*c", imovel[indice].ap.condominio);
				clear();

				printf("Garagem Atual: %d\n", imovel[indice].ap.vagas);
				printf("Novo número de vagas de Garagem: ");
				scanf("%d%*c", imovel[indice].ap.vagas);
				clear();

				break;
			case 3:
				printf("Área Atual: %.2lfm²\n", imovel[indice].terreno.area);
				printf("Nova Área: ");
				scanf("%lf%*c", imovel[indice].terreno.area);
				clear();

				break;
			default:
				printf("Não existe esse tipo de imóvel!\n");
				break;
		}
	}
}