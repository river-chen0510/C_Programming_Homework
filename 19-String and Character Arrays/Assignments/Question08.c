#include <stdio.h>
int main(){
    char arr[6];
    char confirmation;

    printf("Please enter a 6 letter password with no spaces: \n");
    for(int i = 0; i < 6; i++){

        scanf(" %c", &arr[i]);

    }

    printf("Confirm with Y and N?: ");
    scanf(" %c", &confirmation);
    while (getchar() != '\n');

    if(confirmation == 'y' || confirmation == 'Y'){
        printf("confirmed \n");
        printf("your password is: ");

        for(int i = 0; i < 6; i++){
            printf("%c", arr[i]);
        }

        return 0;
    }

    if(confirmation == 'n' || confirmation == 'N'){
        printf("not confirmed, program terminating...");
        return 0;
    }
    
    else{
        printf("invalid input, program terminating...");
        return 0;
    }

    return 0;
}