#include <stdio.h>

union myUnion {
  int myNum;
  char myLetter;
  char myString[30];
};

int main() {
  union myUnion u1;

  u1.myNum = 1000;
  
  // Since this is the last value written to the union, myNum no longer holds 1000 - its value is now invalid
  u1.myLetter = 'A';
  
  printf("myNum: %d\n", u1.myNum);  // This value is no longer reliable
  printf("myLetter: %c\n", u1.myLetter);  // Prints 'A'

  return 0;
}
