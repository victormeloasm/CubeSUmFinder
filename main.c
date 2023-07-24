#include <stdio.h>

#define MAX 10000 // MAX LIMIT NUMBER FOR FIND THE CUBES SUMS

int sum_of_cubes_of_digits(int num) {
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += (digit * digit * digit);
        num /= 10;
    }
    return sum;
}

int main() {
    printf("Natural numbers < 10000 that are equal to the sum of the cubes of their digits:\n");

    for (int num = 1; num < MAX; num++) {
        if (num == sum_of_cubes_of_digits(num)) {
            printf("%d\n", num);
        }
    }

    return 0;
}
