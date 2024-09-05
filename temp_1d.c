#include <stdio.h>
int main() {
    float temperatures[7];
    float highest, lowest;
    int i;
    printf("Enter the temperatures for 7 days:\n");
    for (i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &temperatures[i]);
    }
    highest = lowest = temperatures[0];
    for (i = 1; i < 7; i++) {
        if (temperatures[i] > highest) {
            highest = temperatures[i];
        }
        if (temperatures[i] < lowest) {
            lowest = temperatures[i];
        }
    }
    printf("\nHighest temperature of the week: %.2f\n", highest);
    printf("Lowest temperature of the week: %.2f\n", lowest);
    return 0;
}
