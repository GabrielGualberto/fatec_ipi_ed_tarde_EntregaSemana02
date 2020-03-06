/*
Aluno: Gabriel Gualberto 
Estrutura de Dados - Fatec Ipiranga

Exercicio 5
 Altere o exercício 4 escrevendo uma função que garante que dois valores digitados pelo usuário são diferentes.
*/
#include<stdio.h>
int acha_maior (){    
    int a, b;
    printf("Digite o primeiro numero: ");
    scanf ("%d", &a);
    printf("Digite o segundo numero: ");
    scanf ("%d", &b);
    if(a==b) acha_maior();
    else return a > b ? a : b;
}
int main (){

    int r = acha_maior ();
    printf ("Maior: %d\n", r);
    return 0;
}
