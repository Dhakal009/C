#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float x, sum = 0;

    printf("Enter the value of x in radians: ");
    scanf("%f", &x);

    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += pow(-1, i-1) * pow(x, 2*i-1) / factorial(2*i-1);
    }

    printf("Sum of the sine series for x = %.2f is %.4f\n", x, sum);

    return 0;
}

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
