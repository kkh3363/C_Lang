#include <stdio.h>
int main(){
	int nDalar;
	int nWon;

	printf("Dalar $ :");
	scanf("%d", &nDalar);
	printf("nWon :");
	scanf("%d", &nWon);

	printf("won to dalar : %f\n", (float)nWon / nDalar );
}
