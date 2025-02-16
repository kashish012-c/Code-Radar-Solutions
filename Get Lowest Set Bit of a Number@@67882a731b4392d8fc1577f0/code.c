#include <stdio.h>
int main(){
    int num,lsb;
    scanf("%d",&num);
   lsb = num & 1;
    printf("%d",lsb);
    
}