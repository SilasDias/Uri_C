#include <stdlib.h>
#include <stdio.h>

int main()
{
  int a;
  int b;
  int c;
  int maiorAB;

  scanf("%d%d%d", &a, &b, &c);

  maiorAB = (a + b + abs(a-b))/2;
  maiorAB = (maiorAB + c + abs(maiorAB - c))/2;
  printf("%d eh o maior\n", maiorAB);

  return 0;
}
