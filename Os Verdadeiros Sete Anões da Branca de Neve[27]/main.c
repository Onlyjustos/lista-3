#include <stdio.h>
#include <stdlib.h>
int soma_anao(int anao[]){
    int sum = 0,i;

    for(i=0;i<9;i++){
        sum = sum + anao[i];
    }

    return sum;
}
int main()
{
    printf("digite os anoes\n");
    int i,j,k,m,num_listas,control=0;

    scanf("%d",&num_listas);
    int anao[num_listas][9];
    for(i=0;i<num_listas;i++){
        for(j=0;j<9;j++){
            scanf("%d",&anao[i][j]);

        }

    }
    int diff = 0;
    for(k=0;k<num_listas;k++){
        control = 0;
        diff = soma_anao(anao[k]) - 100;
        for(i=0;i<9&&control==0;i++){
            for(j=0;j<9;j++){
                if(anao[k][j]+anao[k][i] == diff && j!=i && soma_anao(anao[k])-(anao[k][j]+anao[k][i]) == 100){
                    control = 1;
                    break;
                }
            }

        }

        printf("anoes %d\n",k+1);
        for(m=0;m<9;m++){
            if(m!=i-1&&m!=j)
                printf("%d\n",anao[k][m]);
        }
        diff = 0;
    }

    return 0;
}

