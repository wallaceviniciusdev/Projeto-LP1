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
		printf("Titulo: %s\n", imovel[indice].titulo);
		printf("Rua: %s\n", imovel[indice].rua);
		printf("Número: %d\n", imovel[indice].numero);
		printf("Bairro: %s\n", imovel[indice].bairro);
		printf("CEP: %d\n", imovel[indice].cep);
		printf("Cidade: %s\n", imovel[indice].cidade);
		printf("Valor: R$%.2lf\n", imovel[indice].valor);
		printf("----------------\n");

		printf("Novo Título: ");
		fgets(imovel[indice].titulo, MAX, stdin);

		printf("Nova Rua: ");
		fgets(imovel[indice].rua, MAX, stdin);

		printf("Novo Número: ");
		scanf("%d%*c", &imovel[indice].numero);

		printf("Novo Bairro: ");
		fgets(imovel[indice].bairro, MAX, stdin);

		printf("Novo CEP: ");
		scanf("%d%*c", &imovel[indice].cep);

		printf("Nova Cidade: ");
		fgets(imovel[indice].cidade, MAX, stdin);

		printf("Novo Valor: ");
		fgets(imovel[indice].rua, MAX, stdin);

		printf("Novo Operação (1 - Alugar | 2 - Vender): ");
		scanf("%d%*c", &imovel[indice].operacao);

		switch(imovel[indice].tipo){
			case 1:
				printf("Novo número de Pavimentos: ");
				scanf("%d%*c", &imovel[indice].casa.pavimentos);

				printf("Novo número de Quartos: ");
				scanf("%d%*c", &imovel[indice].casa.quartos);

				printf("Nova Área do Terreno: ");
				scanf("%lf%*c", &imovel[indice].casa.areaT);

				printf("Nova Área Construída: ");
				scanf("%lf%*c", &imovel[indice].casa.areaC);

				break;
			case 2:
				printf("Nova Área: ");
				scanf("%lf%*c", &imovel[indice].ap.area);

				printf("Novo número de Quartos: ");
				scanf("%d%*c", &imovel[indice].ap.quartos);

				printf("Nova Posição: ");
				fgets(imovel[indice].ap.posicao, MAX, stdin);

				printf("Novo Andar: ");
				scanf("%d%*c", &imovel[indice].ap.andar);

				printf("Novo valor de Condomínio: ");
				scanf("%lf%*c", &imovel[indice].ap.condominio);

				printf("Novo número de vagas de Garagem: ");
				scanf("%d%*c", &imovel[indice].ap.vagas);

				break;
			case 3:
				printf("Nova Área: ");
				scanf("%lf%*c", &imovel[indice].terreno.area);

				break;
			default:
				printf("Não existe esse tipo de imóvel!\n");
				break;
		}
	}
}