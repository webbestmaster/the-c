#include <stdio.h>

int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;

    printf("===============\n");
    printf("   F to C\n");

    while (fahr <= upper) {
        celsius = 5 / 9 * (fahr - 32);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr += step;
    }

    printf("===============\n");

    return 0;
}