#include <stdio.h>
#include <stdlib.h>

int main(){
    int N,K,count;
    printf("digite o tamanho do vetor: \n");
    do{

        scanf("%d",&N);

    }while( N<0 || N>1000);
    int vetor[N];

    printf("digite os elementos do vetor: \n");
    for(int i = 0;i<N;i++){
        scanf("%d",&vetor[i]);
    }
    printf("digite o numero chave: \n");
    scanf("%d",&K);

    for(int i = 0;i<N;i++){

        count = achei(vetor[i],K)+count;


    }
    printf("%d",count);
    ;
    return 0;
}
int achei(int procurado,int key){

    if(key>=procurado){
        return 1;
    }

    return 0;
}
