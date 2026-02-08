#include <stdio.h>

void biggest3() {
    double n1, n2, n3;
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    double max = n1;
    if (n2 > max) max = n2;
    if (n3 > max) max = n3;

    printf("Largest number is %.2f\n", max);
}

