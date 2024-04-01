#include <stdio.h>

int main(){
  // Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).
  long int gigabytes;
  printf("Digite o valor em gygabites: ");
  int deu_certo = scanf("%li", &gigabytes);

  long int bytes = gigabytes * 1024 * 1024 * 1024;
  printf("O valor em bytes eh %li\n", bytes);
  
  return 0;
}