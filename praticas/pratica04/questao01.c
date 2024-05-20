#include <stdio.h>
#define LIMITE 10

int main(){
  int numeros[LIMITE];

  for(int i = 0; i < LIMITE; i++) {
    printf("Entre com %io numero: ", i + 1);
    int deu_certo = scanf("%i", &numeros[i]);
  }
  int numero;
  printf("Entre com o numero a ser procurado: ");
  int deu_certo = scanf("%i", &numero);

  for (int i = 0; i < LIMITE; i++) {
    if (numero == numeros[i]) {
      printf("Achei o numero %i na posicao %i\n", numero, i);
    }
  }


  return 0;
}