#include <stdio.h>
int main() {
    int seats[5][5];
    int i, j;
    printf("Enter the booking status for each seat (1 for booked, 0 for available):\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Row %d Seat %d: ", i + 1, j + 1);
            scanf("%d", &seats[i][j]);
        }
    }
    printf("\nSeating Arrangement:\n");
    printf("    1    2    3    4    5\n");
    printf("   -----------------------\n");
    for (i = 0; i < 5; i++) {
        printf("%d |", i + 1);
        for (j = 0; j < 5; j++) {
            if (seats[i][j] == 1) {
                printf(" [B] ");
            } else {
                printf(" [A] ");
            }
        }
        printf("\n");
    }
    return 0;
}
