#include <stdio.h>

int main()
{
  float n1;
  float n2;
  float n3;
  float n4;
  float media;
  float exam;
  float mediaexam;

  scanf("%f%f%f%f", &n1, &n2, &n3, &n4);

  media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10;
  printf("Media: %.1f\n", media);

  if (media < 5)
  {
    printf("Aluno reprovado.\n");
  }
  if (media >= 7)
  {
    printf ("Aluno aprovado.\n");
  }
  else if(media > 5 || media < 6.9)
  {
    printf("Aluno em exame.\n");
    scanf("%f", &exam);
    printf("Nota do exame: %.1f\n", exam);
    mediaexam = (media + exam) / 2;
  }
  else if (mediaexam >= 5)
  {
    printf("Aluno aprovado.\n");
    printf("Media final: %.1f\n", media);
  }
  else
  {
    printf("Aluno reprovado.\n");
  }

  return 0;
}
