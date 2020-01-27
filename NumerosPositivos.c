#include <stdio.h>

int main()
{
  float x;
  int count;
  int i;
  
  for(i =0; i < 6; i++)
  {
    scanf("%f", &x);
    if(x > 0)
      {
        count ++;
        }
  }
  printf("%d valores positivos\n", count);

  return 0;
}
