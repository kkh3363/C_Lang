#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int i, num;
  // Initialize the randomizer using the current timestamp as a seed
  // (The time() function is provided by the <time.h> header file)
  srand(time(NULL));

  // Generate random numbers
  for( i = 0; i < 10; i++) {
     num = rand() % 100 + 1;
    printf("%d ", num);
  }
  printf("\n");
  return 0;
}
