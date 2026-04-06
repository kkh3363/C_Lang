pre
score = 82

90 ~ 100 : A
80 ~ 89 : B
70 ~ 79 : C
60 ~ 69 : D
 ~ 59 : F
using switch statement
print degree of score?
pre
```
#include <stdio.h>

int main() {
	int score = 82;

	switch (score / 10) {
		case 10:
		case 9: printf("A\n"); break;
		case 8: printf("B\n"); break;
		case 7: printf("C\n"); break;
		case 6: printf("D\n"); break;
		default: printf("F\n");
	};

	return 0;
}
```
