#include <stdio.h>
#include <stdlib.h>

int main(){
    int N,M;
    printf("digite o tamanho do vetor: \n");
    scanf("%d",&N);
    int vetor[N];

    printf("digite os elementos do vetor: \n");
    for(int i = 0;i<N;i++){
        scanf("%d",&vetor[i]);
    }
    printf("digite quantas consultas a serem feitas: \n");
    scanf("%d",&M);
    int v_Key[M];
    printf("digite os numeros para procurar: \n");
    for(int i = 0;i<M;i++){
        scanf("%d",&v_Key[i]);
    }
    for(int i = 0;i<M;i++){
        if(achei(vetor,v_Key[i],N)==1){
            printf("ACHEI\n");
        }
        else{
            printf("NAO ACHEI\n");
        }
    }
    ;
    return 0;
}
int achei(int vetor[],int key,int N){

    for(int i = 0;i<N;i++){
        if(key==vetor[i]){
            return 1;
        }
    }

    return 0;
}
