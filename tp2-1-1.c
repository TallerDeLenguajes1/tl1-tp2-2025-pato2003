#include <stdio.h>
#include <stdlib.h>

void main(){
    #define N 20
    int i;
    double vt[N];
    for(i = 0;i<N; i++) {
        vt[i]=1+rand()%100;
        printf("%f ", vt[i]);
    }

}
