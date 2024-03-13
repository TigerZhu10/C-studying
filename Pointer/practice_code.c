#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "Hello, World!";
    int lowercaseCount = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            lowercaseCount++;
        }
    }

    printf("The string '%s' contains %d lowercase letters.\n", str, lowercaseCount);

    return 0;
}