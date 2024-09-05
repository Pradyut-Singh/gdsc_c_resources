#include <stdio.h>

int main() {
    char grade;
    printf("Enter the Grade: ");
    scanf("%c", &grade);
    switch (grade) {
        case 'S': printf("Haa Theek Hi Hai\n");
        break;
        case 'A': printf("Sirf A hi laaye ho???\n");
        break;
        case 'B': printf("Sudhar Jaooo\n");
        break;
        case 'C': printf("Sharmah Ji Ko Kya Bolenge Aab\n");
        break;
        case 'D': printf("4 Lakh Isliye De Rahe Hai???\n");
        break;
        case 'E':
        case 'F': printf("Flying Chappal Incoming\n");
        break;
        default: printf("Detain Ho Gaye Kya???\n");
    }
    return 0;
}
