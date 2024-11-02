struct Club {
  char name[100];
  float price;
  int capacity;
};

void reserve(struct Club *club, char name[100], float price, int capacity);

float price_reserve(struct Club *club);

