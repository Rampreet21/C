#include <stdio.h>
#include <stdlib.h>

int main() {
    // Generate random numbers without using time.h
    for (int i = 0; i < 5; i++) {
        printf("%d\n", rand());  // Generates a pseudo-random number
    }
    return 0;
}
