//3. Faça um programa que entra com a idade de uma pessoa e se idade maior que 70 anos, aparece a mensagem "Novos 50".
//Se idade maior que 21 anos, Adulto. Se idade menor que 21 anos, Jovem. 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  int idade;
  
  printf("Ola! Por favor, digite a sua idade: ");
  scanf("%d", &idade);
  
  if (idade > 70) {
    printf("Novos 50\n");
  } else if (idade > 21) {
    printf("Adulto\n");
  } else {
    printf("Jovem\n");
  }
  
return 0;

}
