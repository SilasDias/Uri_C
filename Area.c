#include <stdio.h>

int main()
{
  double a;
  double b;
  double c;
  double pi;
  double a_triangulo;
  double a_circulo;
  double a_trapezio;
  double a_quadrado;
  double a_retangulo;

  scanf("%lf%lf%lf", &a, &b, &c);

  pi = 3.14159;
  a_triangulo = (a * c) / 2;
  a_circulo = pi * (c * c);
  a_trapezio = ((a + b) / 2) * c;
  a_quadrado = b * b;
  a_retangulo = a * b;

  printf("TRIANGULO: %.3f\n", a_triangulo);
  printf("CIRCULO: %.3f\n", a_circulo);
  printf("TRAPEZIO: %.3f\n", a_trapezio);
  printf("QUADRADO: %.3f\n", a_quadrado);
  printf("RETANGULO: %.3f\n", a_retangulo);

  return 0;
}
