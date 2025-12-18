#include <stdio.h>
#include <string.h>
int main(){
    char arr[] = {"hello world"};

    int temp = 0;
    int size = sizeof(arr) / sizeof(arr[0]);

    signed char arr2[size];
    
    for(int i = 0; i < size; i++){
        arr[i] = arr2[i];
        temp = arr2[i];
        temp - 32;
        temp = arr2[i];

        printf("%c", arr2[i]);
        
    }

    return 0;
}