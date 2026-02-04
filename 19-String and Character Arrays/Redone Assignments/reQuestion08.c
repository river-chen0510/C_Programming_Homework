#include <stdio.h>
#include <string.h>

int main(){
    char arr[6];
    char temp;
    char selection; 

    printf("Please enter a 6 letter password: ");
    for(int i = 0; i < 6; i++){
        scanf("%c", &arr[i]);

    }

    printf("Confirm with Y/N: ");

    while (getchar() != '\n');
    scanf("%c", &selection);

    if(selection == 'y' || selection == 'Y'){
        printf("password confirmed! \n");
        printf("Your password is: ");

    for(int i = 0; i < 6; i++){
        printf("%c", arr[i]);
    }

    return 0;
    }

    if(selection == 'n' || selection == 'N'){
        printf("Confirmation failed. Program terminating... \n");
        return 0;
    }else{
        printf("Invalid input! Program terminating... \n");
    }

    return 0;
}