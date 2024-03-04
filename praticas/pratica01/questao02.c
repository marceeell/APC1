#include <stdio.h>

int main() {
  float base;
  float altura;

  base = 2.0f; //2.0f isso float, 2.0 isso double
  altura = 3.0f;
  
  float area = base * altura / 2;3

  printf("A area do triangulo eh %f\n", area);
  
  return 0;
}