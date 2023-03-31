//1. Programa que calcule a média de 5 notas de um aluno.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  float nota1, nota2, nota3, nota4, nota5, media;
  
  printf("Ola! Por favor, digite a primeira nota: ");
  scanf("%f", &nota1);
  
  printf("Agora, por favor, digite a segunda nota: ");
  scanf("%f", &nota2);
  
  printf("Por favor, digite a terceira nota: ");
  scanf("%f", &nota3);
  
  printf("Por favor, digite a quarta nota: ");
  scanf("%f", &nota4);
  
  printf("Por favor, digite a quinta nota: ");
  scanf("%f", &nota5);
  
  media = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;
  
  printf("A media do aluno eh: %.2f\n", media);
  
return 0;

} 
