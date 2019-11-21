#include <stdio.h>

int main()
{
  int n;
  int resto;
  int divisao;

  scanf("%d", &n);

  printf("%d\n", n);
  divisao = n / 100;
  printf("%d nota(s) de R$ 100,00\n", divisao);
  resto = n % 100;

  divisao = resto / 50;
  printf("%d nota(s) de R$ 50,00\n", divisao);
  resto = resto % 50;

  divisao = resto / 20;
  printf("%d nota(s) de R$ 20,00\n", divisao);
  resto = resto % 20;

  divisao = resto / 100;
  printf("%d nota(s) de R$ 10,00\n", divisao);
  resto = resto % 10;

  divisao = resto / 5;
  printf("%d nota(s) de R$ 5,00\n", divisao);
  resto = resto % 5;

  divisao = resto / 2;
  printf("%d nota(s) de R$ 2,00\n", divisao);
  resto = resto % 2;

  divisao = resto / 1;
  printf("%d nota(s) de R$ 1,00\n", divisao);

  return 0;
}
