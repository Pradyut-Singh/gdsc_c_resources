#include <stdio.h>

int main(){

    int age=10;
    switch(age){
        case 2: printf("Toddler");
        break;
        case 10: printf("Child");
        //break;
        case 20: printf("Adult");
        break;
        default: printf("Invalid age");
    }
}
