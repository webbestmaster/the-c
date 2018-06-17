#include <stdio.h>

// print EOF and content
// #How to use
// echo 123 | ./a.out

int main() {
    int c, value;
    c = getchar();

    while (c != EOF) {
        putchar(c);
        c = getchar();
        printf("getchar() != EOF: %d\n", c != EOF);
    }
    printf("getchar() != EOF: %d\n", c != EOF);

    return 0;
}
