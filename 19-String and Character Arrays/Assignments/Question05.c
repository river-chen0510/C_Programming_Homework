#include <stdio.h>
#include <string.h>

int main(){
    char arr[] = {"abcdef"};
    char temp = 0;
    int size = strlen(arr);
    int swap = size / 2;

    for(int i = 0; i < swap; i++){
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }

    for(int i = 0; i < size; i++){
        printf("%c", arr[i]);
    }

    return 0;

}