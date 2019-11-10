#include <stdio.h>

int main()
{
  float a;
  float b;
  double media;

  scanf("%f", &a);
  scanf("%f", &b);

  media = ((a * 3.5) + (b * 7.5)) / 11;
  printf("MEDIA = %.5lf\n", media);

  return 0;
}
