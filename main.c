#include <stdio.h>
#include "funcao_subtracao.h"

int main() {
    printf("Bem-vindo ao nosso projeto de calculadora do Grupo A!\n");
    printf("Integrantes: usuario01, usuario02, usuario03, usuario04\n");
    printf("Funcoes planejadas: Soma, Subtracao, Multiplicacao, Divisao\n\n");

    int resultado_subtracao = subtrair(20, 8);
    printf("Subtracao (20 - 8): %d\n", resultado_subtracao);

    return 0;
}
