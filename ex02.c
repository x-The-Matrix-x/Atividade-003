//2. Faça um programa que receba a idade de uma pessoa e se idade menor que 30 aparece a mensagem "Você é muito jovem". 
//Caso idade maior que 30 anos, o programa não fará nada. 


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  int idade;
  
  printf("Ola! Por favor, digite a sua idade: ");
  scanf("%d", &idade);
  
  if (idade < 30) {
    printf("Voce eh muito jovem!\n");
  }
  
return 0;

}
