#include <stdio.h>

int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = -20;
    upper = 150;
    step = 10;
    celsius = lower;

    printf("===============\n");
    printf("    C to F\n");

    while (celsius <= upper) {
        fahr = celsius / 5 * 9 + 32;
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        celsius += step;
    }

    printf("===============\n");

    return 0;
}