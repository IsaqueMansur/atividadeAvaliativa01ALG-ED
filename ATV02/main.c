#include <stdio.h>

int main() {

    int v1, v2, auxiliar, i, n;

    v1 = 0;
    v2 = 1;

    printf("Digite um n�mero: ");
    scanf("%d", &n);
    printf("\nS�rie de Fibonacci:\n\n");
    printf("%d\n", v2);

    for(i = 1; i < n; i++) {

        auxiliar = v1 + v2;
        v1 = v2;
        b = auxiliar;

        printf("%d\n", auxiliar);
    }
    return 0;
}
