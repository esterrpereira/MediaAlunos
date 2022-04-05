#include <stdio.h>

int main(void) {
  int quant ;
  float media, notas,contador, soma =0;
printf("Digite a quantidade de alunos na sala: ");
    scanf("%d", &quant);
  
  for(contador = 0; contador < quant; contador++){
      printf("Digite a nota de cada aluno: ");
    scanf("%f", &notas);
   soma = soma + notas;
   if (notas < 6)
    printf("Nota Baixa\n");
  }
  media = soma/quant;
  printf("Média = %f", media);
  
  return 0;
}