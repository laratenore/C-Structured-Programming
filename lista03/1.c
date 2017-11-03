#include <stdio.h>
#include <stdlib.h>

int tamanho(char entrada[])
{
  int i, cont;
  cont = 0;
  i = 0;
  while(entrada[i]){
    cont++;
    i++;
  }
  
  return cont;
}

int vogais(char entrada[], int tamanho)
{
  
  int i; 
  int contvog = 0;
  
  for(i = 0; i < tamanho; i++){
    
    if (entrada[i] == 'a' || entrada[i] == 'e' || entrada[i] == 'i' || entrada[i] == 'o' || entrada[i] == 'u') {
      contvog++;
    }
  }
  return contvog;
}

int main(){
  int tam;
  
  char entrada[255];
  fgets(entrada, 255, stdin);
  
  tam = tamanho(entrada);
  
  printf("%d", vogais(entrada, tam));
  
  return 0;
}