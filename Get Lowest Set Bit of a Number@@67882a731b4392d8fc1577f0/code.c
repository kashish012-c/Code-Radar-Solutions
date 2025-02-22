#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int postion;
    while((n&1)==0){
        n >>= 1;
        postion++;
    }
    printf("%d",postion);
    
}