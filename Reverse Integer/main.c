#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, x, digit, reverse = 0;
    printf("Enter the number : ");
    scanf("%d", &x);
    while(x!=0){
    digit = x%10;
    x = x / 10;
    reverse = reverse * 10  + digit;
    }
    printf("The reverse number is  : %d", reverse);
    return 0;
}
