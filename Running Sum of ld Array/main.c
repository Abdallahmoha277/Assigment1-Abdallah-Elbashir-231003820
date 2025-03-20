#include <stdio.h>

void runningSum(int nums[], int n, int result[]) {
    result[0] = nums[0];
    for (int i = 1; i < n; i++) {
        result[i] = result[i - 1] + nums[i];
    }
}

int main() {
    int n;


    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int nums[n], result[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }


    runningSum(nums, n, result);


    printf("Running sum: [");
    for (int i = 0; i < n; i++) {
        printf("%d", result[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}
