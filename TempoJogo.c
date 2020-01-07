#include <stdio.h>

int main()
{
  int inicio;
  int fim;
  int duracao;

  scanf("%d%d", &inicio, &fim);

  duracao = fim - inicio;

  if (duracao >= 1 && duracao <= 24)
  {
    printf("O JOGO DUROU %d HORA(S)\n", duracao);
  }
  else if (duracao < 0 || duracao == 0)
  {
    duracao += 24;
    printf("O JOGO DUROU %d HORA(S)\n", duracao);
  }

  return 0;
}
