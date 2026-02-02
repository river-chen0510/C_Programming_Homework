#include <stdio.h>
#include <string.h>
int main(){
    char arr[] = {"Hello World!"};

    arr[0] = 'A';
    int size = strlen(arr);
    
    for(int i = 0; i < size; i++){
        printf("%c", arr[i]);
    }

    return 0;

    
}