#include <stdio.h>

int main() {
    int day;
    printf("Siiiuuuuuu Cristiano! Please enter any number to find the day: ");
    scanf("%d", &day);
    switch (day) {
        case 'c': printf("It's Sunday\n"); break;
        case 2: printf("It's Monday\n"); break;
        case 3: printf("It's Tuesday\n"); break;
        case 4: printf("It's Wednesday\n"); break;
        case 5: printf("It's Thursday\n"); break;
        case 6: printf("It's Friday\n"); break;
        case 7: printf("It's Saturday\n"); break;
        default: printf("Sorry Cris! Number is invalid\n");
    }
    return 0;
}
