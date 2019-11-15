#include <stdio.h>

int main()
{
  char name[12];
  double salary;
  double sales;
  double total;

  scanf("%s", name);
  scanf("%lf", &salary);
  scanf("%lf", &sales);

  total = ((15 * sales) / 100) + salary;
  printf("TOTAL = R$ %.2f\n", total);

  return 0;
}
