#include <stdio.h>

int main()
{
  int x;
  int y;
  float total;

  scanf("%d%d", &x, &y);

  switch (x)
  {
    case 1:
    printf("Total: R$ %.2f\n", total = (4 * y));
    break;

    case 2:
    printf("Total: R$ %.2f\n", total = (4.50 * y));
    break;

    case 3:
    printf("Total: R$ %.2f\n", total = (5 * y));
    break;

    case 4:
    printf("Total: R$ %.2f\n", total = (2 * y));
    break;

    case 5:
    printf("Total: R$ %.2f\n", total = (1.50 * y));
    break;

  }

  return 0;
}
