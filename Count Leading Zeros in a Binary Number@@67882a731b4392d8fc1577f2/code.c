#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int bit_l=32;
    int count=0;
    for(int i= bit_l-1; i>=0; i--){
        if((n>>i)&1){
            break;
        }count++;
    }
    printf("%d",count);
    return 0;

}