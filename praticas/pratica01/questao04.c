#include <stdio.h>

// outra forma de declarar um constante
#define PER_ICMS 0.17f;

int main() {
  float preco_inicial;
  float preco_final;

  const float ICMS = 0.17f;
  const float COFINS = 0.076f;
  const float PIS_PASEP = 0.0165f;

  preco_inicial = 100.0f;

  float valor_imposto_icms = ICMS * preco_inicial;
  float valor_imposto_cofins = COFINS * preco_inicial;
  float valor_imposto_pis_pasep = PIS_PASEP * preco_inicial;

  preco_final = (1 + ICMS + COFINS + PIS_PASEP) * preco_inicial;

  printf("Preco inicial era %f\n", preco_inicial);
  printf("Imposto ICMS é %f\n", valor_imposto_icms);
  printf("Imposto COFINS é %f\n", valor_imposto_cofins);
  printf("Imposto PI_PASEP é %f\n", valor_imposto_pis_pasep);
  printf("Preco final final é %f\n", preco_final);

  return 0;
}