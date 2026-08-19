#include <stdio.h>

int main() {
    float mark1, mark2, mark3;
    float average;

    // 1. Get marks input from the user
    printf("Enter marks for Subject 1 (0-100): ");
    scanf("%f", &mark1);

    printf("Enter marks for Subject 2 (0-100): ");
    scanf("%f", &mark2);

    printf("Enter marks for Subject 3 (0-100): ");
    scanf("%f", &mark3);

    // 2. Validate input using if-else
    if (mark1 < 0 || mark1 > 100 || mark2 < 0 || mark2 > 100 || mark3 < 0 || mark3 > 100) {
        printf("\nError: Please enter valid marks between 0 and 100.\n");
    } else {
        // 3. Calculate average
        average = (mark1 + mark2 + mark3) / 3.0;

        printf("\n---------------------------\n");
        printf("Average Score: %.2f%%\n", average);

        // 4. Determine Letter Grade using if-else if chain
        if (average >= 90.0) {
            printf("Grade: A (Excellent!)\n");
        } else if (average >= 80.0) {
            printf("Grade: B (Very Good)\n");
        } else if (average >= 70.0) {
            printf("Grade: C (Good)\n");
        } else if (average >= 60.0) {
            printf("Grade: D (Satisfactory)\n");
        } else {
            printf("Grade: F (Needs Improvement / Fail)\n");
        }
        printf("---------------------------\n");
    }

    return 0;
}
