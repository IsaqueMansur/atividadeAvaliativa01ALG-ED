#include <stdio.h>

int main() {

    int dia, mes, ano;
    printf("Dia do seu nascimento: ");
    scanf("%d", &dia);
    printf("Mes do seu nascimento: ");
    scanf("%d", &mes);
    printf("Ano do seu nascimento: ");
    scanf("%d", &ano);

    int f1, f2, f3;

    f1 = (dia*100 + mes) + ano;
    f2 = (f1/100)+(f1%100);
    f3 = (f2 % 5);

    printf("Seu valor deu: %d\n", f3);

    if (f3==0) {
        printf("VOC� FOI DEFINIDO COMO T�MIDO!");
    }
    else if (f3==1) {
        printf("VOC� FOI DEFINIDO COMO SONHADOR!");
    }
    else if (f3==2) {
        printf("VOC� FOI DEFINIDO COMO PAQUERADOR!");
    }
    else if (f3==3) {
        printf("VOC� FOI DEFINIDO COMO ATRAENTE!");
    }
    else if (f3==4) {
        printf("VOC� FOI DEFINIDO COMO IRRESIST�VEL!");
    }

    return 0;
}
