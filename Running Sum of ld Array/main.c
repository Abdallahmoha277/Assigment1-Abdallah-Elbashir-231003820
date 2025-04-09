#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, x, n, arr[100], result[100];
    printf("Enter the number of the  elements of the array : ");
    scanf("%d", &n);
    printf("Enter the elements of the array : ");
    for(i=0;i<n;i++){
    scanf("%d", &arr[i]);
    }
    result[0] = arr[0];
    for(i=0;i<n;i++){
        result[i]=result[i-1]+arr[i];
    }
    printf("Running Sum : \n");
    for(i = 0; i < n; i++){
        printf("%d ", result[i]);
    }


    return 0;
}
