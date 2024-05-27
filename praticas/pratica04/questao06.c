#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char verbo[21];
  char pronomes[6][5] = {"EU", "TU", "ELE", "NÓS", "VOS", "ELES"};
  char sufixos[6][5] = {"O", "AS", "A", "AMOS", "AIS", "AM"};
  

  printf("Entre com um verbo terminado em AR: ");
  int deu_certo = scanf("%s", verbo);

  int tamanho = strlen(verbo);

  for(int i=0; i<tamanho; i++) {
    verbo[i] = toupper(verbo[i]);
  }
  int ultima_posicao = tamanho - 1;
  int penultima_posicao = ultima_posicao - 1;

  if (verbo[penultima_posicao] == 'A' && verbo[ultima_posicao] == 'R') {

  } else {
    printf("O verbo %s nao termina em AR!", verbo);
  }

  return 0;
}