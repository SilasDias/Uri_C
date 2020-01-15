#include <stdio.h>

int main()
{
  char a;
  char b;
  char c;

  scanf("%c", &a);
  scanf("%c", &b);
  scanf("%c", &c);

  if (a == "vertebrado")
    {
      if (b == "mamifero")
        {
          if(c == "onivoro")
            {
              printf("homem\n");
              }
              else
                {
                  printf("vaca\n");
                  }
        }
        else
          {
            if(c == "carnivoro")
            {
              printf("aguia\n");
              }
              else
                {
                  printf("pomba\n");
                  }
          }
    }
    else
      {
        if(b == "inseto")
          {
            if(c == "hematofago")
              {
                printf("pulga\n");
                }
                else
                  {
                    printf("largata\n");
                    }
          }
          else
            {
              if(c == "hematofago")
              {
                printf("sanguessuga\n");
                }
                else
                {
                  printf("minhoca\n");
                  }
                  
            }
      }
  return 0;
  }
