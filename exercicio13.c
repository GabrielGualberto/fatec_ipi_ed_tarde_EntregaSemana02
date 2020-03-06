/*
Aluno: Gabriel Gualberto 
Estrutura de Dados - Fatec Ipiranga

Exercicio 13
 Escreva uma função que recebe um vetor de char v e um char c. A função deve substituir cada ocorrência de c em v por *.
*/
#include<stdio.h>
void ocorrencia(char c[],char v[],int t){
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {
            if (c[i]==v[j])
            {
                v[j]='*';
            }
            
        }
        
    }
    printf("Vetor v após a mudança: %s\n",v);
    
}

int main(){
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&tamanho);
    char c[tamanho];
    char v[tamanho];
    printf("Digite a palavra: ");
    scanf("%s",c);
    printf("Digite a palavra: ");
    scanf("%s",v);
    ocorrencia(c,v,tamanho);
}