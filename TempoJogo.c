#include <stdio.h>

int main()
{
  int inicio;
  int fim;
  int duracao;

  scanf("%d%d", &inicio, &fim);

  if (fim > inicio)
  {
    duracao = fim - inicio;
  }
  else
  {
    duracao = inicio - fim;
  }

  printf("O JOGO DUROU %d HORA(S)\n", duracao);

  return 0;
}
