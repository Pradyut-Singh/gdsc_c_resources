#include <stdio.h>

int main() {
    int grade, count = 0;
    float average,sum=0;
    printf("Enter grades: \n");
    while (1) {
        scanf("%d", &grade);
        if (grade < 0)
            break;
        sum += grade;
        count++;
    }
    if (count != 0) {
        average = sum / count;
        printf("Average grade: %.2f\n", average);
    } else {
        printf("No grades entered.\n");
    }
    return 0;
}
