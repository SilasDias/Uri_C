#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
  float x1;
  float x2;
  float y1;
  float y2;
  double distancia;

  scanf("%f%f", &x1, &y1);
  scanf("%f%f", &x2, &y2);

  distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
  printf("%.4lf\n", distancia);

  return 0;
}
