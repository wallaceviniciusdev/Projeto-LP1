#include "editar.h"
#include "struct.h"
#include "clear.h"
#include <string.h>


int main(){
	tImovel imovel[100];
	FILE *arquivo;
	char url[] = "database.txt";

	arquivo = fopen(url, "a+b");

	fclose(arquivo);

	return 0;
}