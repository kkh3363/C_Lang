#include <stdio.h>

struct Car {
  char brand[30];
  int year;
};

void updateYear(struct Car *c, int nYear) {
  c->year = c->year + nYear;
}

int main() {
  struct Car myCar = {"Kia", 2020};

  updateYear(&myCar, 5);  // Pass struct pointer

  printf("Brand: %s\n", myCar.brand);
  printf("Year: %d\n", myCar.year);

  return 0;
}

