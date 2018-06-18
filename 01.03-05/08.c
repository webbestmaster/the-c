#include <stdio.h>

/* count line in file */

int main() {
    int c, specSymbolsCount;

    specSymbolsCount = 0;

    c = getchar();

    while (c != EOF) {
        if (c == '\n' || c == '\t' || c == ' ') {
            specSymbolsCount += 1;
        }
        c = getchar();
    }

    printf("%d\n", specSymbolsCount);

    return 0;
}
