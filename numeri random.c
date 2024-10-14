#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomPick();

int main() {
    srand(time(NULL));

    // Generate a random number between 1 and 100000
    int randNumber = rand() % 100000 + 1; // Random number between 1 and 100000

    // Print the random number


    // Initialize counters for even and odd numbers
    int evenCount = 0;
    int oddCount = 0;

    // Generate and print random numbers inside the loop
    for (int i = 0; i < randNumber; i++) {

        int innerRand = randomPick();
        printf("Inner random number: %d\n", innerRand);
        // Check if the number is even or odd
        if (innerRand % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    // Print the results
    printf("Random number: %d\n", randNumber);
    printf("Even numbers count: %d\n", evenCount);
    printf("Odd numbers count: %d\n", oddCount);

    return 0;
}

int randomPick() {
    return rand() % 100000 + 1; // Random number between 1 and 100000
}
