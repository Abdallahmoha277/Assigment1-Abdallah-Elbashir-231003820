#include <stdio.h>

int main() {
    int arr[5] = {2, 4, 6, 8, 10};
    int i;

    for (i = 0; i < 5; i++) {
        arr[i] = arr[i] + i;
    }

    printf("Updated Array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
