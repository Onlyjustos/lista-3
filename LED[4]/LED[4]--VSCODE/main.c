#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{   int v,d[100],n,aux[10] = {6,2,5,5,4,5,6,3,7,6},k;
    int i = 0,count = 0;
    scanf("%d",&n);
    scanf("%d",&v);

    do{
        k = pow(10,count);
        count++;
    }while (k<v);
    count--;
    for(i;i<count;i++){
        d[i] = v/pow(10,i);
        d[i] = d[i]%10;
    }
    int sum;
    for(i = 0; i<count;i++){
        sum = sum + aux[d[i]];
    }
    printf("%d",sum);
    return 0;
}
    