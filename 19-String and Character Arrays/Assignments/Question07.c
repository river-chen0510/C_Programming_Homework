#include <stdio.h>
#include <string.h>
int main(){
    char arr[] = {"hello world"};
    int size = strlen(arr);
    int temp = 0;
    
    for(int i = 0; i < size; i++){
        arr[i] = arr[i] - 32;

        if(i == 5){
            printf(" ");
        }

        printf("%c", arr[i]);
        
    }

    return 0;
}