#include<stdio.h>
int main(){
    int n,lsb;
    scanf("%d",&n);
    lsb= n & -n;
    printf("%d",n);
}