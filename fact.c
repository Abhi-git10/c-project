#include <stdio.h>

void factorial() {
    int n;
    unsigned long long fact = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("Factorial of %d = %llu\n", n, fact);
}

