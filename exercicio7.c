/*
Aluno: Gabriel Gualberto 
Estrutura de Dados - Fatec Ipiranga

Exercicio 7
Escreva uma função que calcula o fatorial de um número recebido por parâmetro, devolvendo-o ao final
*/
#include<stdio.h>
int fatorial(int n){
    if (n == 1) return n;
    else return n * fatorial(n-1);
}
int main(){
    int num;
    printf("Digite um numero para ser fatorado: ");
    scanf("%d",&num);
    printf("%d\n", fatorial(num));
return 0;
}