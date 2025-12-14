#include <stdio.h>
#include <string.h>
int main(){
    char arr[] = {"Hello world!"};

    int size = strlen(arr);

    printf("Before: \n");
    for(int i = 0; i < size; i++){
        printf("%c", arr[i]);
    }

    arr[0] = 'A';

    printf("\n \nAfter: \n");
    for(int i = 0; i < size; i++){
        printf("%c", arr[i]);
    }

    return 0;

}