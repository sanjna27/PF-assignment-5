#include <stdio.h>

int main() {
    int percentage;
    printf("Enter percentage: ");
    scanf("%d", &percentage);

    char grade = (percentage >= 90) ? 'A' :
                 (percentage >= 80) ? 'B' :
                 (percentage >= 70) ? 'C' :
                 (percentage >= 60) ? 'D' : 'F';

    printf("Grade: %c\n", (percentage < 0 || percentage > 100) ? 'I' : grade);

    return 0;
}
