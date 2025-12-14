#include <stdio.h>
#include <string.h>

int main(){
    char arr[] = "abcdef";
    printf("size of arr %d \n", sizeof(arr));
    printf("string length of arr: %d \n", strlen(arr));

    char arr2[] = "abc";
    char arr3[] = {'a', 'b', 'c'};

    printf("size of arr2: %ld \n", sizeof(arr2));
    printf("Size of arr3: %ld \n", sizeof(arr3));
    printf("String length of arr2: %ld \n", strlen(arr2));
    printf("String length of arr3: %ld \n", strlen(arr3));

    return 0;
}