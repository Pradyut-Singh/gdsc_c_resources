#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int fact = 1;
    for(int i = 1; i <= num; i++){
        fact *= i;
    }
    printf("The factorial of %d is %d\n", num, fact);
    return 0;
}