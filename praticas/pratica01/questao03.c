#include <stdio.h>
int main(){
  float pi = 3.1416;
  int raio;
  float perimetro;

  printf("entre com valor do raio: ");
  int deu_certo = scanf("%i", &raio);
  perimetro = 2 * pi * raio;
  printf("perimetro = %f\n", perimetro);

  return 0;
}