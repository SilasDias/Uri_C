#include <stdio.h>
#include <math.h>

int main()
{
  float a;
  float b;
  float c;
  float d;
  float A;
  float B;
  float C;
  float D;

  scanf("%f%f%f", &a, &b, &c);

  if (a >= b && a >= c)
    {
      if (b >= c)
        {
            A = a;
            B = b;
            C = c;
        }
        else
        {
            A = a;
            B = c;
            C = b;
        }
    }
    else if (b >= a && b >= c)
    {
        if (a >= c)
        {
            A = b;
            B = a;
            C = c;
        }
        else
        {
            A = b;
            B = c;
            C = a;
        }
    }
    else if (c >= a && c >= b)
    {
        if (a >= b)
        {
            A = c;
            B = a;
            C = b;
        }
        else
        {
            A = c;
            B = b;
            C = a;
        }
    }

    if (A >= (B + C))
    {
      printf("NAO FORMA TRIANGULO\n");
    }
    else if ((A * A) == ((B * B) + (C * C)))
    {
      printf("TRIANGULO RETANGULO\n");
    }
    else if ((A * A) > ((B * B) + (C * C)))
    {
      printf("TRIANGULO OBTUSANGULO\n");
    }
    else if ((A * A) < ((B * B) + (C * C)))
    {
      printf("TRIANGULO ACUTANGULO\n");
    }
    
    if (A == B && B == C)
    {
      printf("TRIANGULO EQUILATERO\n");
    }
    else if (A == B || B == C)
    {
      printf("TRIANGULO ISOSCELES\n");
    }

  return 0;
}
