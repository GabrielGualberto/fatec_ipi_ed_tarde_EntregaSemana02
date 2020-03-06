/*
Aluno: Gabriel Gualberto 
Estrutura de Dados - Fatec Ipiranga

Exercicio 14
 Escreva uma função que recebe um vetor de inteiros e decide se ele está ordenado 
de forma decrescente.
*/
#include<stdio.h>
void ordenado(int v[],int t){
    int x[t];
    int maior=0;
    for(int i = 0 ; i < t ; i++){
        for (int j= 0; j < t; j++){
            printf("A: %d %d\n",v[i],v[j]);
            if (v[i]<v[j]){
                maior=v[j];
                v[j]=v[i];
                v[i]=maior;
                printf("%d %d\n",v[i],v[j]);
            }else{
                
            }
        }
    }
        
}
    
    
    /*for(int i=0;i<t;i++){
        if(x[i]==v[i]){
            continue;
        }else{
            printf("Não esta ordenado\n");
            break;
        }
        printf("Esta ordenado\n");
    }         */



int main(){
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&tamanho);
    int vetor[tamanho];
    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite um numero: ");
        scanf("%d",&vetor[i]);
    }
    ordenado(vetor,tamanho);
    

}