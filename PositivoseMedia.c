#include <stdio.h>

int main()
{
  float x;
  int count;
  int i;
  float media;
  
  media = 0;
  for(i =0; i < 6; i++)
  {
    scanf("%f", &x);
    if(x > 0)
      {
        count ++;
        }
  media = media + x;
  }
  printf("%d valores positivos\n", count);
  printf("%.1f\n", (media/6));

  return 0;
}

