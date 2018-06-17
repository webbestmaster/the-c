#include <stdio.h>

#define LOWER 0 // нижняя граница таблицы
#define UPPER 300 // верхняя граница таблицы
#define STEP 20 // размер шага

int main() {
    int farh;

    // forward
    printf("--- forward ---\n");
    for (farh = 0; farh <= 300; farh += 20) {
        printf("%3d %6.1f\n", farh, (5.0 / 9.0) * (farh - 32));
    }

    // backward
    printf("--- backward ---\n");
    for (farh = 300; farh >= 0; farh -= 20) {
        printf("%3d %6.1f\n", farh, (5.0 / 9.0) * (farh - 32));
    }

    // use 'defined variables'
    printf("--- defined variables ---\n");
    for (farh = LOWER; farh <= UPPER; farh += STEP) {
        printf("%3d %6.1f\n", farh, (5.0 / 9.0) * (farh - 32));
    }

    return 0;
}