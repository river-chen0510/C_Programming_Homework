#include <stdio.h>
int main(){
    char arr[] = {'H','e', 'l', 'l', 'o' ,' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    int count = 0;
    int size = sizeof(arr) / sizeof(arr[0]);
    int i = 0;

    while(1){
        count++;

        if(count == size){
            count--;
            break;
        }
    }

    printf("length = %d characters", count);
    return 0;


}