#include <stdio.h>

struct CarSt {
	char brand[30];
	int year;
};
// call by value
void valueFunc(struct CarSt car) {
	car.year = 2026;
}
// call by reference
void refFunc(struct CarSt *car) {
	car->year = 2026;
}
int main() {
	struct CarSt mycar = { "BMW",2025 };
	printf("Brand = %s  Year=%d\n", mycar.brand, mycar.year); // 2025
	valueFunc(mycar);
	printf("Brand = %s  Year=%d\n", mycar.brand, mycar.year); // 2025
	refFunc(&mycar);
	printf("Brand = %s  Year=%d\n", mycar.brand, mycar.year); // 2026
	

	return 0;
}
