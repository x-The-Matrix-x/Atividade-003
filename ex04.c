/*
4. Elabore um programa para verifica��o de situa��o eleitoral, onde ser� informada somente a idade do eleitor, considere as situa��es abaixo:
	
Menor que 0 n�o nasceu
0-15 n�o vota
16-17 opcional
18-65 obrigat�rio
exatamente 41- somente ganha pr�mio e n�o vota!!!
> 65 opcional
exatamente 88 - somente ganha pr�mio e n�o vota!!!

- N�o utilizar os operadores l�gicos || ou &&
- Utilizar somente estrutura if/else conforme apresentada abaixo
- N�o utilizar switch/case
- N�o utilizar a estrutura "else if"

*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  int idade;
  
  printf("Ola! Por favor, digite a sua idade: ");
  scanf("%d", &idade);
  
  if (idade < 0) {
    printf("Voce ainda nao nasceu!\n");
  } else {
    if (idade >= 0 && idade <= 15) {
      printf("Voce nao vota.\n");
    }
    if (idade >= 16 && idade <= 17) {
      printf("O voto eh opcional.\n");
    }
    if (idade >= 18 && idade <= 65) {
      printf("O voto eh obrigatorio.\n");
    }
    if (idade == 41 || idade == 88) {
      printf("Voce ganhou um premio, mas nao precisa votar.\n");
    }
    if (idade > 65 && idade != 88) {
      printf("O voto eh opcional.\n");
    }
  }
  
return 0;

}
