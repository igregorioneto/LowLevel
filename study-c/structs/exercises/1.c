#include <stdio.h>

struct horario {
  int hora, minuti, segundo;
};

struct data {
  int dia, mes, ano;
};

struct compromisso {
  struct data d;
  struct horario h;
  char texto[100];
};