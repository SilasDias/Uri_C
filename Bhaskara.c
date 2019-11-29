#include <stdio.h>
#include <math.h>

int main()
{
  double a;
  double b;
  double c;
  double x1;
  double x2;
  double delta;


  scanf("%lf%lf%lf", &a, &b, &c);

  delta = ((b * b) - 4*a*c);
  if (a <= 0.0 || delta < 0.0)
  {
    printf("Impossivel calcular\n");
  }
  else
  {
    x1 = (-b + sqrt(delta))/(2*a);
    x2 = (-b - sqrt(delta))/(2*a);
    printf("R1 = %.5lf\n", x1);
    printf("R2 = %.5lf\n", x2);
  }

  return 0;
}
