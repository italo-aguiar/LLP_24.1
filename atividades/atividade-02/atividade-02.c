//Impressão de números pares

#include <stdio.h> 
int main() { 
  int numero;  
  for (numero = 0; numero <= 50; numero++) { 
    if ((numero % 2 == 0)  & (numero!=0)) { 
      printf("%d\n", numero); 
    } else {
    printf("\n");
    }
  }  
return 0; 
} 
