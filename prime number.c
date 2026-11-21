#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false; // 0, 1, and negative numbers are not prime
    }
    if (num == 2) {
        return true;  // 2 is the only even prime number
    }
    if (num % 2 == 0) {
        return false; // Exclude all other even numbers
    }

    // Check odd factors up to the square root of num
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int start, end;

    // Prompt user for the range
    printf("Enter the starting number of the range: ");
    scanf("%d", &start);
    printf("Enter the ending number of the range: ");
    scanf("%d", &end);

    // Swap values if the user entered the range in reverse
    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }

    printf("Prime numbers between %d and %d are:\n", start, end);

    bool found = false;
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
            found = true;
        }
    }

    if (!found) {
        printf("None");
    }
    printf("\n");

    return 0;
}

