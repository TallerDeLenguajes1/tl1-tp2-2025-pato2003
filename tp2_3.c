#include "stdio.h"
#include "stdlib.h"
#define N 5
#define M 7

void main(){
    int i,j;
    int mt[N][M];
    int *ptr;
    ptr = &mt[0][0];
    
    for(i = 0;i<N; i++)
    {
        for(j = 0;j<M; j++)
        {
            *(ptr + (i * M + j)) = 1 + rand()%100;
            
            printf("%d ", mt[i][j]);
        }
        printf("\n");
    }
}

