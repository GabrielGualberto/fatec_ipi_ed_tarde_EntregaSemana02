/*
Aluno: Gabriel Gualberto 
Estrutura de Dados - Fatec Ipiranga

Exercicio 9
Escreva uma função que decide se um número é primo.
*/
#include<stdio.h>
void vogal(char letra){
    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') printf("A letra %c é uma vogal", letra);
    else  printf("A letra %c não é uma vogal", letra);
}

int main(){
    char letra;
    printf("Digite uma letra: ");
    scanf("%c",letra);
    vogal(letra);
  
return 0;
}