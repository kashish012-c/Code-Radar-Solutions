#include <stdio.h>
int main(){
    int n , bit;
    int leadingzero=1;
    scanf("%d",&n);
    if(n==0){
        printf("0");
        return 0;
    }
    for(int i=31;i>=0;i--){
        bit=(n>>i)&1;
        if(bit==1){
            leadingzero=0;
        }
        if(leadingzero){
            printf("%d",bit);
        }
    
    }
    printf("\n");
    return 0;
}