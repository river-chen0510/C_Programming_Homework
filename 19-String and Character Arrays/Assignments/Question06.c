#include <stdio.h>
#include <string.h>
int main(){
    char arr[] = {"Hello World!"};
    int size = strlen(arr);
    int count = 0;

    for(int i = 0; i < size; i++){
        if (arr[i] == 'o'){
            count++;
        }
    }

    printf("The character 'o' appears %d times", count);

    return 0;
}