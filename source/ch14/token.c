#include <stdio.h>
#include <string.h>

int main () {
    char data[] = "apple,banana,cherry";
    char *token = strtok(data, ",");
    
    while (token != NULL) {
        printf("Fruit: %s\n", token);
        token = strtok(NULL, ",");
    }
    return 0;
}
