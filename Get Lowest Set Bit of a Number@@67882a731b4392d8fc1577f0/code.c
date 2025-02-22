#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    lsb= num & -num;
    printf("%d",lsb);    
}