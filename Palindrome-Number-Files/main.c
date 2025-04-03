#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, digit, reversed =0;
    printf("Enter the number : ");
    scanf("%d", &x);
    int original = x;
    if(x<0){
        printf("False\n");
        return 1;
    }else{
        while (x != 0){
        digit = x % 10;
        reversed = reversed * 10 + digit;
        x = x/10;
        }
    }if (original == reversed) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}
