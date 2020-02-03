#include <stdio.h>

int main()
{
  int x;
  int count;
  int i;

  scanf("%d", &x);

  i = 0;
  do {
    if((x % 2) != 0)
      {
        printf("%d\n", x);
        i++;
        }
        x++;
  }while(i < 6);

  return 0;
}
