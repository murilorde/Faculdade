// Código feito por Murilo (A.D.S)

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int a, b, termoUM = 0, termoDOIS = 1, termoTRES;


int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");

    printf("=========\n");
    printf("Fibonacci\n");
    printf("=========\n\n");

    printf("Digite um número maior ou igual a três: ");
    scanf("%d", &a);
    system("cls");

    printf("\nSua sequência de Fibonacci é: \n\n");


    for (b = 1; b <= a; b++){

       printf("%d || ", termoUM);
       termoTRES = termoUM + termoDOIS;
       termoUM = termoDOIS;
       termoDOIS = termoTRES;
    }

    return 0;
}
