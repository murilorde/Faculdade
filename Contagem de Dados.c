#include <stdio.h>

struct Perfil{
  
  char nome[50];
  char email[256]; 
  char telefone[15];
};

int main()
{
   printf("=================\n");
   printf("CONTAGEM DE DADOS\n");
   printf("=================\n\n");
   
   int a(char string[]);
   struct Perfil cadastro;
    
    printf("Nome: ");
    scanf("%s", cadastro.nome);
    
    printf("Email: ");
    scanf("%s", cadastro.email);
    
    printf("Telefone: ");
    scanf("%s", cadastro.telefone);
    
    int num1 = a(cadastro.nome);
    printf("\nNome: %d dígitos", num1);
    
    int num2 = a(cadastro.email);
    printf("\nEmail: %d dígitos", num2);
    
    int num3 = a(cadastro.telefone);
    printf("\nTelefone: %d dígitos", num3);
    
    return 0;
}
    
int a(char string[]){
        
        int b = 0;
        
        while(string[b] != '\0'){
            ++b;
            
        }

return b;

}