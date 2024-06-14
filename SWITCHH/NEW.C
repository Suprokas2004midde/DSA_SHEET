#include<stdio.h>

int main(){
    int choice;
    char alpha; // Declare alpha variable once

    printf("Menu \n");
    printf("1. check input is an alphabet\n");
    printf("2. check input is a special character\n");
    printf("3. check input is a number\n");
    printf("4. Exit\n");

    printf("Choose your choice: ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            printf("Enter a character: \n");
            scanf(" %c", &alpha); // Added space before %c to consume newline
            if((alpha >= 'a' && alpha <= 'z') || (alpha >= 'A' && alpha <= 'Z'))
                printf("%c is an alphabet.\n", alpha);
            else
                printf("%c is not an alphabet.\n", alpha);
            break;
                
        case 2:
            printf("Enter a character: \n");
            scanf(" %c", &alpha); // Added space before %c to consume newline
            if(!((alpha >= 'a' && alpha <= 'z') || (alpha >= 'A' && alpha <= 'Z') || (alpha >= '0' && alpha <= '9')))
                printf("%c is a special character.\n", alpha);
            else
                printf("%c is not a special character.\n", alpha);
            break;
            
        case 3:
            printf("Enter a character: \n");
            scanf(" %c", &alpha); // Added space before %c to consume newline
            if(alpha >= '0' && alpha <= '9')
                printf("%c is a number\n", alpha);
            else
                printf("%c is not a number\n", alpha);
            break;
            
        case 4:
            printf("Exiting program. Goodbye.\n");
            break;
            
        default:
            printf("Invalid choice! Please enter a number between 1 and 4.\n");
    }
    
    return 0;
}
