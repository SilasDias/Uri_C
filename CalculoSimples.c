#include <stdio.h>

int main()
{
  int coder1;
  int coder2;
  int number1;
  int number2;
  float price1;
  float price2;
  float total;

  scanf("%d%d%f", &coder1, &number1, &price1);
  scanf("%d%d%f", &coder2, &number2, &price2);

  total = (number1 * price1) + (number2 * price2);
  printf("VALOR A PAGAR: R$ %.2f\n", total);

  return 0;
}
