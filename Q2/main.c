#include <stdio.h>

int main() {
    // Step 1: Initialize array
    int arr[5] = {2, 4, 6, 8, 10};
    int i;

    // Step 2: Modify array elements
    for (i = 0; i < 5; i++) {
        arr[i] = arr[i] + i;
    }

    // Step 3: Print array elements
    printf("Updated Array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
