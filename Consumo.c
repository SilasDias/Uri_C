#include <stdio.h>

int main()
{
  int x;
  float y;
  double consumo;

  scanf("%d", &x);
  scanf("%f", &y);

  consumo = x / y;
  printf("%.3lf km/l\n", consumo);

  return 0;
}
