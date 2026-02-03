#include <stdio.h>
#include <string.h>
int main(){
    char arr[] = {"hello world"};
    int size = strlen(arr);
    
    printf("Before: \n");
    for(int i = 0; i < size; i++){
        printf("%c", arr[i]);
    }

    printf("\n");

    printf("After: \n");
    for(int i = 0; i < size; i++){
        if(arr[i] == ' '){
            arr[i] = arr[i] + 32;
        }

        arr[i] = arr[i] - 32;
        printf("%c", arr[i]);
    }

    return 0;
}