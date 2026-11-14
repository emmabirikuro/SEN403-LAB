
#include <stdio.h>

int main() {
    int i;
    int sum = 0;
    float average;

    // Calculate the sum of numbers from 1 to 100
    for (i = 1; i <= 100; i++) {
        sum = sum + i;
    }

    // Calculate the average
    average = (float)sum / 100;

    // Display the results
    printf("Sum of numbers from 1 to 100 = %d\n", sum);
    printf("Average of numbers from 1 to 100 = %.2f\n", average);

    return 0;
}
