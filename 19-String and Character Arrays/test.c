#include <stdio.h>
#include <string.h>
int main(){
    char arr[] = "data";
    char arr2[] = "Data";

    int matching = 0;
    int size = strlen(arr);

    for(int i = 0; i < size; i++){
        if(arr[i] == arr2[i]){
            matching++;
        }
    }

    if(matching == 4){
        printf("The two arrays are matching");
    }else{
        printf("The two arrays are not matching");
    }
    return 0;
}