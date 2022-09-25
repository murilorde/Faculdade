#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int n = 0;

int main(){
  
  setlocale(LC_ALL, "Portuguese_Brazil");

   printf("===================\n");
   printf("CONTAGEM REGRESSIVA\n");
   printf("===================\n\n");
   
   printf("Digite um número: ");
   scanf("%d", &n);
   
   while(n >= 0)
   {
      
      printf("%d ", n);
      n--;
   }
   return 0;
  
}