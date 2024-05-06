// 8. Faça um programa em C que calcule o fatorial de um número inteiro.
#include <stdio.h>

int main() {
  long int numero;
  long int fatorial = 1;

  printf("Entre com um numero >= 0: ");
  int leu_certo = scanf("%li", &numero);

  if (leu_certo && numero >= 0) {
    for (int i = numero; i > 1; i--) {
      fatorial = fatorial * i;
    }
    printf("O fatorial de %li =%li\n", numero, fatorial);
  } else {
    printf("Numero invalido. Tente novamente!\n");
  }

  return 0;
}