#include <stdio.h>

int main()
{
  float salario;
  float ajuste;
  int juros;
  float total;

  scanf("%f", &salario);

  if (salario >= 0 && salario <= 400.00)
            {
                juros = 15;
                ajuste = (salario * 15) / 100;
                total = salario + ajuste;
                printf("Novo salario: %.2f\n", total);
                printf("Reajuste ganho: %.2f\n", ajuste);
                printf("Em percentual: %d %\n", juros);
            }else if (salario > 400.00 && salario <= 800.00)
            {
                juros = 12;
                ajuste = (salario * 12) / 100;
                total = salario + ajuste;
                printf("Novo salario: %.2f\n", total);
                printf("Reajuste ganho: %.2f\n", ajuste);
                printf("Em percentual: %d %\n", juros);
            }else if (salario > 800.00 && salario <= 1200.00)
            {
                juros = 8;
                ajuste = (salario * 10) / 100;
                total = salario + ajuste;
                printf("Novo salario: %.2f\n", total);
                printf("Reajuste ganho: %.2f\n", ajuste);
                printf("Em percentual: %d %\n", juros);
            }else if (salario > 1200.00 && salario <= 2000.00)
            {
                juros = 07;
                ajuste = (salario * 07) / 100;
                total = salario + ajuste;
                printf("Novo salario: %.2f\n", total);
                printf("Reajuste ganho: %.2f\n", ajuste);
                printf("Em percentual: %d %\n", juros);
            }else if (salario > 2000.00)
            {
                juros = 04;
                ajuste = (salario * 04) / 100;
                total = salario + ajuste;
                printf("Novo salario: %.2f\n", total);
                printf("Reajuste ganho: %.2f\n", ajuste);
                printf("Em percentual: %d %\n", juros);
            }else
            {
              printf("Isento\n");
            }

  return 0;
}
