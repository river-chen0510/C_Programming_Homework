#include <stdio.h>
#include <string.h>

int main(){
    char arr[] = {"Hello World!"};
    int count = 0;
    int size = strlen(arr);

    for(int i = 0; i < size; i++){
        if(arr[i] == 'o'){
            count++;
        }
    }

    printf("'o' occurs %d times in the array", count);

    return 0;

}