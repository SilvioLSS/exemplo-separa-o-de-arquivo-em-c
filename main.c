#include <string.h>
#include "ex1.h"

int main() {
    pessoa p;

    strcpy(p.nome, "João");
    p.idade = 30;

    imprimir_pessoa(p);

    return 0;
}
