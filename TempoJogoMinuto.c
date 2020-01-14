#include <stdio.h>

int main()
{

  int horaInicial;
  int minutoInicial;
  int horaFinal;
  int minutoFinal;
  int hora;
  int minuto;

  scanf("%d%d%d%d", &horaInicial, &minutoInicial, &horaFinal, &minutoFinal);

  hora = horaFinal - horaInicial;
  minuto = minutoFinal - minutoInicial;

  if (hora < 0)
  {
    hora += 24;
  }
  if (minuto < 0)
  {
    minuto += 60;
    hora -= 1;
  }
  if (minuto == 0 && hora == 0)
  {
    printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
  }
  else
  {
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, minuto);
  }

  return 0;
}
