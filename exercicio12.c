/*
Aluno: Gabriel Gualberto 
Estrutura de Dados - Fatec Ipiranga

Exercicio 12
Escreva uma função que decide se há elementos iguais em um vetor de reais.
*/
#include<stdio.h>
char encontraIgual(float vetor[],int t){
        for(int i = 0; i<t; i++){
        for(int j=0;j<t;j++){
            if(vetor[i]==vetor[j] && i!=j) {
                return printf("Os elementos %.2f e %.2f são iguais\n", vetor[i],vetor[j]);
            }
        }
    }
    return printf("Nao ha elementos iguais\n");
}

int main(){
    int tamanho;
    printf("Informe o tamanho do vetor: ");
    scanf("%d",&tamanho);
    if(tamanho<=1){
        printf("Informe um valor maior que 1!\n");
        main();
    }
    float vetor[tamanho];
    for(int i= 0; i<tamanho; i++){
        printf("Digite um numero; ");
        scanf("%f",&vetor[i]);
    }
    encontraIgual(vetor,tamanho);

return 0;    
}