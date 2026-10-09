#include <stdio.h>

float average(int a, int b, int c) {
    return (a + b + c) / 3.0;
}

int main() {
    int math, physics, chem;

    printf("Enter Math, Physics, Chemistry scores: ");
    scanf("%d %d %d", &math, &physics, &chem);

    float avg = average(math, physics, chem);

    printf("\n--- Scores ---\n");
    printf("Math: %d\n", math);
    printf("Physics: %d\n", physics);
    printf("Chemistry: %d\n", chem);
    printf("Average: %.2f\n", avg);

    return 0;
}