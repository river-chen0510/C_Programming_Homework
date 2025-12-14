#include <stdio.h>
#include <string.h>
int main(){
    char arr[] = "abcd";

    printf("sizeof length: %d \n", sizeof(arr) / sizeof(arr[0]) - 1);
    printf("strlen length: %d \n", strlen(arr));

    return 0;
}