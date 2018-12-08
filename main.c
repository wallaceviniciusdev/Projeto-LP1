#include "editar.h"
#include "struct.h"
#include "clear.h"
#include <string.h>

int main(){
	tImovel imovel[100];
	FILE *arquivo;

	EditarImovel(imovel, 0, arquivo);

	return 0;
}