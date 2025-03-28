#include <stdio.h>

int main() {
    int arr[5] = {3, 1, 4, 1, 5};
    int i, sum = 0, max = arr[0];

    for (i = 0; i < 5; i++) {
        sum += arr[i];
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    for (i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            arr[i] /= 2;
        } else {
            arr[i] *= 2;
        }
    }

    printf("Sum: %d\n", sum);
    printf("Max: %d\n", max);

    printf("Modified Array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
