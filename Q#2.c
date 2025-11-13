#include <stdio.h>


float checkStanding(float sub1, float sub2, float sub3) {
    float average;
    average = (sub1 + sub2 + sub3) / 3.0;

    printf("\nAverage Marks: %.2f\n", average);

    if (average >= 50 && sub1 >= 40 && sub2 >= 40 && sub3 >= 40) {
        printf("Result: PASS ?\n");
    } else {
        printf("Result: FAIL ?\nReason: ");
        if (average < 50)
            printf("Average below 50. ");
        if (sub1 < 40)
            printf("Subject 1 below 40. ");
        if (sub2 < 40)
            printf("Subject 2 below 40. ");
        if (sub3 < 40)
            printf("Subject 3 below 40. ");
        printf("\n");
    }

    return average;
}

int main() {
    float sub1, sub2, sub3, avg;

    printf("Enter marks for 3 subjects (0-100):\n");
    printf("Subject 1: ");
    scanf("%f", &sub1);
    printf("Subject 2: ");
    scanf("%f", &sub2);
    printf("Subject 3: ");
    scanf("%f", &sub3);

    avg = checkStanding(sub1, sub2, sub3);

    return 0;
}

