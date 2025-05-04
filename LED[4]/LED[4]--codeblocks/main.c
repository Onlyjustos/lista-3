#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{   int digitos[100],n,conta_digitos,sum;
    int i = 0,count = 0;
    scanf("%d",&n);
    int numero[n];
    for(i=0;i<n;i++){
        scanf("%d",&numero[i]);
    }

    for(i=0;i<n;i++){
        do{
            conta_digitos = pow(10,count);
            count++;
        }while (conta_digitos<numero[i]);
        count--;
        sum = soma_digitos(numero[i],digitos,count);
        count = 0;
        printf("%d leds\n",sum);
    }



    return 0;
}
int soma_digitos(int numero,int digitos[],int count){
    int i,aux[10] = {6,2,5,5,4,5,6,3,7,6};
    for(i=0;i<count;i++){
            digitos[i] = numero/pow(10,i);
            digitos[i] = digitos[i]%10;
        }
    int sum = 0;
    for(i = 0; i<count;i++){
        sum = sum + aux[digitos[i]];
    }

    return sum;
}




