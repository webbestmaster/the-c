#include <stdio.h>

// print EOF and content
// #How to use
// echo 123 | ./a.out

int main() {
    int c;
    c = getchar();

    while (c != EOF) {
        putchar(c);
        c = getchar();
    }

    printf("EOF: ");
    printf("%d\n", EOF);

    return 0;
}
