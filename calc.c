#include <stdio.h>

int main(){
    int op = 1;
    int num1 , num2;
    int result;
    while(op != 5){
        printf("Enter the first number \n");
        scanf("%d", &num1);
        printf("Enter the second number \n");
        scanf("%d", &num2);
        printf("Enter the operation you want to perform \n");
        printf("1. Addition \n");
        printf("2. Subtraction \n");
        printf("3. Multiplication \n");
        printf("4. Division \n");
        printf("5. Exit \n");
        scanf("%d", &op);
        switch(op){
            case 1:
                result = num1 + num2;
                printf("The result is %d \n", result);
                break;
            case 2:
                result = num1 - num2;
                printf("The result is %d \n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("The result is %d \n", result);
                break;
            case 4:
                result = num1 / num2;
                printf("The result is %d \n", result);
                break;
            case 5:
                
                break;
            default:
                printf("Invalid Operation \n");
        }
    }
}