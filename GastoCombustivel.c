#include <stdio.h>

int main()
{
  int x;
  int y;
  double combustivel;

  scanf("%d", &x);
  scanf("%d", &y);

  combustivel = (y / 12.00) * x;
  printf("%.3lf\n", combustivel);

  return 0;
}
