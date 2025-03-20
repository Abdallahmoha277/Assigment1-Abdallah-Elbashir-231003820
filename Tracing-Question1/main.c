#include <stdio.h>

int main() {
    int a = 10, b = 5, sum, product, difference;

    // Perform calculations
    sum = a + b;
    product = a * b;
    difference = a - b;

    // Output results
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);
    printf("Difference: %d\n", difference);

    // Conditional check
    if (sum > product) {
        printf("Sum is greater than Product\n");
    } else {
        printf("Product is greater or equal to Sum\n");
    }

    return 0;
}
