#include <stdio.h>

int main(){
  float valor_hora_trabalhada = 150.0f;
  int total_horas_trabalhadas = 200;

  const float IR = 0.25f;
  const float INSS = 0.11f;

  float salario_bruto = valor_hora_trabalhada * total_horas_trabalhadas;
  float valor_ir = salario_bruto * IR;
  float valor_inss = salario_bruto * INSS;
  float salario_liquido = salario_bruto - valor_ir - valor_inss;

  printf("\x1b[31m--------------------------\x1b[0m\n");
  printf("\x1b[33m C O N T R A C H E Q U E\x1b[0m\n");
  printf("\x1b[32m--------------------------\x1b[0m\n");
  
  printf("Salario bruto...: \x1b[34m%8.2f\x1b[0m\n", salario_bruto);
  printf("Valor IR........: \x1b[33m%8.2f\x1b[0m\n", valor_ir);
  printf("Valor INSS......: \x1b[33m%8.2f\x1b[0m\n", valor_inss);
  printf("Salario Liquido.: %8.2f\n", salario_liquido);
  
  return 0;
}