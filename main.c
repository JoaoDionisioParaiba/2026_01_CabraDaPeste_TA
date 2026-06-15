#include <stdio.h>
#include "funcao_soma.h"

int main() {
    printf("Bem-vindo ao nosso projeto de calculadora do Grupo A!\n");
    printf("Integrantes: usuario01, usuario02, usuario03, usuario04\n");
    printf("Funcoes planejadas: Soma, Subtracao, Multiplicacao, Divisao\n\n");

    int resultado_soma = somar(5, 3);
    printf("Soma (5 + 3): %d\n", resultado_soma);

    return 0;
}