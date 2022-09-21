#include <stdio.h>
#include <string.h>
int main()
{
    char name[80], email[50], phone[20];
    printf("Digite o nome: ");
    gets(name);
    printf("Digite o e-mail: ");
    gets(email);
    printf("Digite o numero de telefone: ");
    gets(phone);


    // using the %zu format specifier to print size_t
    printf("\nNome = %zu \n",strlen(name));
    printf("E-mail = %zu \n",strlen(email));
    printf("Telefone = %zu \n",strlen(phone));

    return 0;
}
