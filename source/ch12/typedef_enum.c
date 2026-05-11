#include <stdio.h>

typedef enum {MON, TUE, WED, THU, FRI, SAT, SUN} Day;

int main() {
  Day today = WED;
  if (today == WED) {
    printf("It is Wednesday!\n");
  }
  return 0;
}
