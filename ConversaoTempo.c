#include <stdio.h>

int main()
{
  int n;
  int hours;
  int minuts;
  int seconds;

  scanf("%d", &n);

  hours = n / 3600;
  minuts = (n % 3600) / 60;
  seconds = n % 60;
  printf("%d:%d:%d\n", hours, minuts, seconds);

  return 0;
}
