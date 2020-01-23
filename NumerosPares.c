#include <stdio.h>

int main()
{
  int d;
  int divisao;

  for (d = 1; d <= 100; d++ )
  {
    divisao = d % 2;
    if (divisao == 0)
    {
      printf("%d\n", d);
    }
  }

  return 0;
}
