#include <stdio.h>

int main()
{
  double n;
  int nota;
  int moeda;
  int valor;
  int resto;
  int divisao;

  scanf("%lf", &n);

  valor = (n * 100);

  printf("NOTAS:\n");
  nota = 100;
  divisao = valor / (nota * 100);
  printf("%d nota(s) de R$ 100.00\n", divisao);
  resto = valor % (nota *100);

  nota = 50;
  divisao = resto / (nota * 100);
  printf("%d nota(s) de R$ 50.00\n", divisao);
  resto = resto % (nota * 100);

  nota = 20;
  divisao = resto / (nota * 100);
  printf("%d nota(s) de R$ 20.00\n", divisao);
  resto = resto % (nota * 100);

  nota = 10;
  divisao = resto / (nota * 100);
  printf("%d nota(s) de R$ 10.00\n", divisao);
  resto = resto % (nota * 100);

  nota = 5;
  divisao = resto / (nota * 100);
  printf("%d nota(s) de R$ 5.00\n", divisao);
  resto = resto % (nota * 100);

  nota = 2;
  divisao = resto / (nota * 100);
  printf("%d nota(s) de R$ 2.00\n", divisao);
  resto = resto % (nota * 100);

  printf("MOEDAS:\n");
  moeda = 100;
  divisao = resto / moeda;
  printf("%d moeda(s) de R$ 1.00\n", divisao);
  resto = resto % (moeda);

  moeda = 50;
  divisao = resto / moeda;
  printf("%d moeda(s) de R$ 0.50\n", divisao);
  resto = resto % (moeda);

  moeda = 25;
  divisao = resto / moeda;
  printf("%d moeda(s) de R$ 0.25\n", divisao);
  resto = resto % (moeda);
  
  moeda = 10;
  divisao = resto / moeda;
  printf("%d moeda(s) de R$ 0.10\n", divisao);
  resto = resto % (moeda);

  moeda = 5;
  divisao = resto / moeda;
  printf("%d moeda(s) de R$ 0.05\n", divisao);
  resto = resto % (moeda);

  moeda = 1;
  divisao = resto / moeda;
  printf("%d moeda(s) de R$ 0.01\n", divisao);
  resto = resto % (moeda);
 
  return 0;
}
