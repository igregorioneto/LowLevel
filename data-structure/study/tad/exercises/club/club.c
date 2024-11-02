#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "club.h"

void reserve(struct Club *club, char name[100], float price, int capacity) {
  strcpy(club->name, name);
  club->price = price;
  club->capacity = capacity;
}

float price_reserve(struct Club *club) {
  return club->capacity * club->price;
}