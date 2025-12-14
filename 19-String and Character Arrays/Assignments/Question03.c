#include <stdio.h>
int main(){

    char arr[] = {"hello world!"};
    int len = 0;
    int i = 0;

    while(1){
    
    if(arr[i] != '\0'){
        len++;
    }

    if(i == len){
        break;
    }

    i++;

    }

    printf("Length: %d", len--);

    return 0;
}