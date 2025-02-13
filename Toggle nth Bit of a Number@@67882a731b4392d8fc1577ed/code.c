#include <stdio.h>
int main(){
    int n,num;
    scanf("%d %d",&num,&n);
    num=num^(1<<n);
    printf("%d",num);
}