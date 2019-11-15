#include <stdio.h>

int main()
{
  int number;
  int hours;
  float price_hours;
  float salary;

  scanf("%d", &number);
  scanf("%d", &hours);
  scanf("%f", &price_hours);

  salary = (hours * price_hours);
  printf("NUMBER = %d\n", number);
  printf("SALARY = U$ %.2f\n", salary);

  return 0;
}
