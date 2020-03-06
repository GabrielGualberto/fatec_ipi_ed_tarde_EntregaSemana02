/*
Aluno: Gabriel Gualberto 
Estrutura de Dados - Fatec Ipiranga

Exercicio 11
Escreva uma função que recebe um vetor de inteiros e inverte seu conteúdo. 
Por exemplo, o vetor 1, 2, 3, 4 deve ser invertido para 4, 3, 2, 1.
*/
#include<stdio.h>
void inverteVetor(int v[],int invertido[],int tamanho){
    int i,n=tamanho;
    for(i=0;i<tamanho;i++){
        n--;
        invertido[i]=v[n];
        }
    printf("Vetor invertido: ");
    for (i = 0; i < tamanho; i++)
    {
        printf("%d ",invertido[i]);
    }
}

int main(){
int tamanhoVetor, i,j;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&tamanhoVetor);
int num[tamanhoVetor];
int mun[tamanhoVetor];
    for(i=0; i < tamanhoVetor ;i++){
        printf("Digite um numero: ");
        scanf("%d",&num[i]);
    }
    inverteVetor(num,mun,tamanhoVetor);

return 0;
}