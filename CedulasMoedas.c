#include <stdio.h>

int main()
{
  float n;
  int resto;
  int divisao;
  float f_resto;
  float f_divisao;

  scanf("%f", &n);

  printf("NOTAS:\n");
  divisao = n / 100;
  printf("%d nota(s) de R$ 100.00\n", divisao);
  resto = (int) n % 100;

  divisao = resto / 50;
  printf("%d nota(s) de R$ 50.00\n", divisao);
  resto = resto % 50;

  divisao = resto / 20;
  printf("%d nota(s) de R$ 20.00\n", divisao);
  resto = resto % 20;

  divisao = resto / 10;
  printf("%d nota(s) de R$ 10.00\n", divisao);
  resto = resto % 10;

  divisao = resto / 5;
  printf("%d nota(s) de R$ 5.00\n", divisao);
  resto = resto % 5;

  divisao = resto / 2;
  printf("%d nota(s) de R$ 2.00\n", divisao);
  resto = resto % 2;

  printf("MOEDAS:\n");
  divisao = resto / 1;
  printf("%d moeda(s) de R$ 1.00\n", divisao);
  f_resto = resto % 1;

  f_divisao = f_resto / 0.50;
  printf("%d moeda(s) de R$ 0.50\n", (int) f_divisao);
  //f_resto = f_resto % 0.50;

  f_divisao = f_divisao / 0.25;
  printf("%d moedas(s) de R$ 0.25\n", f_divisao);
  //f_resto = f_resto % 0.50;
  return 0;
}
