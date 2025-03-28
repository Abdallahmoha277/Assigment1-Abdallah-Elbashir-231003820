#include <stdio.h>

int isPalindrome(int x) {
    if (x < 0) return 0;

    int original = x;
    int reversed = 0;

    while (x != 0) {
        int digit = x % 10;            
        reversed = reversed * 10 + digit;
        x = x / 10;                    
    }
    if (original == reversed)
        return 1;
    else
        return 0;
}

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    if (isPalindrome(number))
        printf("True: The number is a palindrome.\n");
    else
        printf("False: The number is NOT a palindrome.\n");

    return 0;
}
