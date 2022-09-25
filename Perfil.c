#include <stdio.h>
#include <locale.h>

int dia, mes, ano, a, b, c, d, e, resultado;



int main(){

setlocale(LC_ALL, "Portuguese_Brazil");
printf("=====================\n");
printf("Descubra o seu perfil\n");
printf("=====================\n\n");

printf("Se você me disser sua data de nascimento, vou dizer se você é:\n\n");
printf("Tímido\nSonhador\nPaquerador\nAtraente\nIrresistível\n\n");


    printf("===============================\n");
    printf("Digite a data do seu nascimento\n");
    printf("===============================\n\n");
    printf("Dia: ");
    scanf("%d", &dia);
    printf("Mês: ");
    scanf("%d", &mes);
    printf("Ano: ");
    scanf("%d", &ano);
    printf("\nVocê nasceu em: %d/%d/%d\n\n", dia, mes, ano);

    a = dia * 100 + mes;
    b = a + ano;
    c = b / 100 + b - (b/100) * 100;
    d = c / 5;
    e = d * 5;
    resultado = c - e;

    switch(resultado){
        case 0:
        printf("\nVocê é Tímido!\n");
        break;
        case 1:
        printf("\nVocê é Sonhador!\n");
        break;
        case 2:
        printf("\nVocê é Paquerador!\n");
        break;
        case 3:
        printf("\nVocê é Atraente!\n");
        break;
        case 4:
        printf("\nVocê é Irresistível!\n");
        break;
    }


return 0;
}