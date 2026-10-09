#include <stdio.h>

void inputAndShow() {
    int math, physics, chem;

    printf("Enter Math, Physics, Chemistry scores: ");
    scanf("%d %d %d", &math, &physics, &chem);

    printf("\n--- Scores ---\n");
    printf("Math: %d\n", math);
    printf("Physics: %d\n", physics);
    printf("Chemistry: %d\n", chem);
}

int main() {
    inputAndShow();
    return 0;
}