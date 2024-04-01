#include <stdio.h>
#include <math.h>
int main(){
// 6. Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).
// ax² + bx + c = 0
// delta = b² - 4ac
// x = (-b +- raiz_quadrada(delta))/2a
  
  float a, b, c;
  float delta;
  float x;
  float x1;
  float x2 = (-b - sqrt(delta))/2*a;
  float equacao = a*x*x + b*x + c;

  printf("Digite o valor de x: ");
  int deu_certo = scanf("%f", &x);
  
  printf("Digite o valor de a: ");
  deu_certo = scanf("%f", &a);

  printf("Digite o valor de b: ");
  deu_certo = scanf("%f", &b);

  printf("Digite o valor de c: ");
  deu_certo = scanf("%f", &c);

  delta = b*b - 4*a*c;
  printf("O valor de delta eh %f\n", delta);
  deu_certo = scanf("%f", &delta);
  
  return 0;
}