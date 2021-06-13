#include <stdio.h>
int main() {
    int n, m, i, N, f[101];
    scanf("%d", &N);
    f[0]=0;
    f[1]=0;
    for(n=2; n<=N; n++){
        f[n]=1; 
    }
    printf("1: "); 
    for(m=0; m<=N; m++){
        printf("%2d ", m); 
    }
    printf("\n"); 
    for(n=2; n<=N; n++){
        if(f[n]==1){
            for(m=n+1; m<=N; m++){
                if((m)%(n)==0){ 
                    f[m]=0;
                } 
            }
        }
    printf("%d: ", n); 
    for(m=0; m<=N; m++){
        if(f[m]==1){ printf("%2d ", m);
        } 
    }
    printf("\n"); 
    }
    return 0; 
}