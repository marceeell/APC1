#include <stdio.h>
int main() {
  int numero;

  printf("Entre com um numero de 1 a 10: ");
  int leu_certo = scanf("%i", &numero);

  if (leu_certo > 0 && numero < 11) {
    printf("Tabuada do %i\n", numero);
    // printf("1 x %i = %i\n", numero, numero * 1);
    // printf("2 x %i = %i\n", numero, numero * 2);
    // printf("3 x %i = %i\n", numero, numero * 3);
    // printf("4 x %i = %i\n", numero, numero * 4);
    // printf("5 x %i = %i\n", numero, numero * 5);
    // printf("6 x %i = %i\n", numero, numero * 6);
    // printf("7 x %i = %i\n", numero, numero * 7);
    // printf("8 x %i = %i\n", numero, numero * 8);
    // printf("9 x %i = %i\n", numero, numero * 9);
    // printf("10 x %i = %i\n", numero, numero * 10);
    for (int i = 1; i <= 10; i++) {
      printf("%i x %i = %i\n", i, numero, i * numero);
    }
    printf("A tabuada invertida de %i\n", numero);
    for (int i = 10; i > 0; i--) {
      printf("%i x %i = %i\n", i, numero, i * numero);
    }
  } else {
    printf("Numero invalido. Tente novamente!\n");
  }

  return 0;
}