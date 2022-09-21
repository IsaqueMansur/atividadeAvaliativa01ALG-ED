#include <stdio.h>

int main()
{
    int tabuada = 0;
    printf("Digite o valor para saber a tabuada do mesmo: ");
    scanf("%d", &tabuada);

    for (int x = 1; x<=tabuada; ++x){

        printf("%ix%i = %i\n", x, tabuada, x * tabuada);
    }

    return 0;
}
