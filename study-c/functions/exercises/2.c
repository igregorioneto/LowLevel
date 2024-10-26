#include <stdio.h>
#include <string.h>

void converterData(int dia, int mes, int ano) {
  char mesRes[20];
  switch(mes) {
    case 1:
      strcpy(mesRes, "janeiro");
      break;
    case 2:
      strcpy(mesRes, "fevereiro");
      break;
    case 3:
      strcpy(mesRes, "março");
      break;
    case 4:
      strcpy(mesRes, "abril");
      break;
    case 5:
      strcpy(mesRes, "maio");
      break;
    case 6:
      strcpy(mesRes, "junho");
      break;
    case 7:
      strcpy(mesRes, "julho");
      break;
    case 8:
      strcpy(mesRes, "agosto");
      break;
    case 9:
      strcpy(mesRes, "setembro");
      break;
    case 10:
      strcpy(mesRes, "outubro");
      break;
    case 11:
      strcpy(mesRes, "novembro");
      break;
    case 12:
      strcpy(mesRes, "dezembro");
      break;
  }

  printf("%d de %s de %d\n", dia, mesRes, ano);
}

int main()
{
  int dia, mes, ano;
  printf("Digite uma data: \n");
  printf("Digite o dia: ");
  scanf("%d", &dia);
  printf("Digite o mês: ");
  scanf("%d", &mes);
  printf("Digite o ano: ");
  scanf("%d", &ano);

  converterData(dia, mes, ano);

  return 0;
}