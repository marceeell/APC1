#include <stdio.h>
/* Faça um programa em C que calcule a média final a partir da fórmula (0,4 x A1) + (0,6 x A2). Considere A1 e A2 números reais entre 0 a 10. */

int main(){
  int A1 = 0.0f;
  int A2 = 0.0f;

  float a1 = 0.4;
  float a2 = 0.6;

  printf("entre com valor de A1: ");
  int deu_certo = scanf("%i", &A1);

  printf("entre com valor de A2: ");
  deu_certo = scanf("%i", &A2);

  float media = (A1 * a1) + (A2 * a2);
  printf("media = %f\n", media);

  return 0;
}