#include <stdio.h>

int main()
{
    int valor, contador=0;

    printf("Digite o inicio do contador decrescente: \n ");
    scanf ("%i" , &valor);

    while(valor >= contador){

        printf("%i\n", valor);

        valor--;

    }
    return 0;
}
