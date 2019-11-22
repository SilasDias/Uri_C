#include <stdio.h>

int main()
{
  int n;
  int year;
  int month;
  int days;

  scanf("%d", &n);

  year = n / 365;
  month = (n % 365) / 30;
  days = (n % 365) % 30;
  printf("%d ano(s)\n", year);
  printf("%d mes(es)\n", month);
  printf("%d dia(s)\n", days);

  return 0;
}
