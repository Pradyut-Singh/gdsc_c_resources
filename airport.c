#include <stdio.h>

int main() {
    int weight;
    printf("Enter the weight of your luggage: ");
    scanf("%d", &weight);
    if (weight > 25) {
        printf("Please pay the fine of Rs. 300 per kg\n");
        weight -= 25; //weight=weight-25;
        printf("Fine: Rs. %d\n", weight * 300);
    }
    else if (weight > 20) {
        printf("Please pay the fine of Rs. 200 per kg\n");
        weight -= 20; //weight=weight-20;
        printf("Fine: Rs. %d\n", weight * 200);
    }
    else if (weight > 15) {
        printf("Please pay the fine of Rs. 100 per kg\n");
        weight -= 15;
        printf("Fine: Rs. %d\n", weight * 100);
    }
    else {
        printf("No fine\n");
    }
    return 0;
}



// && and || operators
// != not equal to == equal to
// + - * / %
// > < >= <=