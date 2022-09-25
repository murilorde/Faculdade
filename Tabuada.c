//Código feito por Murilo (A.D.S)

#include <stdio.h>

int main()
{
    int a, b; 
    
    printf("Digite um número: ");
    scanf ("%d", &a);
   
printf("\n===================\n");
printf("TABUADA DO 1 até %d\n", a);
printf("===================\n");


for (int e = 1;e <= a; e++){
    for (int i = 1; i <= 10; i++){
        b = e*i;
        printf ("%d x %d = %d\n", e, i, b);
         if(i == 10){
             printf("\n///////////////\n\n");
         }
    }
}
   
   
    return 0;
}
