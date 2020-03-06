/*
Aluno: Gabriel Gualberto 
Estrutura de Dados - Fatec Ipiranga

Exercicio 6
Escreva uma função que recebe um inteiro (1, 2 ou 3) que representa um mês do primeiro trimestre. 
A função deve exibir o mês representado ou a mensagem “valor inválido” caso o valor seja diferente de 1, 2 e 3.
*/
#include<stdio.h>
void mes(int x){
       switch (x)
    {
    case 1:
        printf("Mês correspondente: Janeiro\n");
        break;
    case 2:
        printf("Mês correspondente: Fevereiro\n");
        break;
    case 3:
        printf("Mês correspondente: Março\n");
        break;
    default:
        printf("Valor invalido\n");
        break;
    }
}
int main(){
    int num;
    printf("Digite um numero: \n");
    scanf("%d",&num);
 
return 0;
}