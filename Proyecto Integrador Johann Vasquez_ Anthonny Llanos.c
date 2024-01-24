#include <stdio.h>

int main() {
    int n, i, j, sum;
    int count = 0;

    printf("Ingrese limite de intervalo para ver numero perfectos: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = 0;
        for (j = 1; j < i; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum == i) {
            printf("%d es un número perfecto.\n", i);
            count++;
        }
    }
    printf("Hay %d números perfectos entre 1 y %d.\n", count, n);

    return 0;
}
