/*
Aluno: Gabriel Gualberto 
Estrutura de Dados - Fatec Ipiranga

Exercicio 8
Escreva uma função que decide se um número é primo.
*/
#include<stdio.h>
void primo(int n){
    int divisivel=0, i;
    for(i=1; i <= n; i++){
        if(n%i==0) divisivel++;
    }
    if(divisivel == 2) printf("O numero %d é primo \n",n);
    else printf("O numero %d nao é primo\n", n);
}
int main(){
    int i,x;
    printf("Digite um numero: ");
    scanf("%d",&x);
    primo(x);
}

