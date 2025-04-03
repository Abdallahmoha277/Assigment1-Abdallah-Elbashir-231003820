#include <stdio.h>

int main() {
    int a = 10, b = 5, sum, product, difference;

    sum = a + b;
    product = a * b;
    difference = a - b;
    
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);
    printf("Difference: %d\n", difference);

    
    if (sum > product) {
        printf("Sum is greater than Product\n");
    } else {
        printf("Product is greater or equal to Sum\n");
    }

    return 0;
}

THE OUTPUT:

Sum: 15
Product: 59
Difference: 5
Product is greater or equal to Sum
