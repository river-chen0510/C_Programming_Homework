#include <stdio.h>
#include <string.h>
int main(){
    char arr[] = {"hello world"};
    int temp = 0;
    int size = strlen(arr);
    
    for(int i = 0; i < size; i++){
        temp = arr[i];
        temp - 32;
        temp = arr[i];

        printf("%c", arr[i]);
    }

    return 0;
}