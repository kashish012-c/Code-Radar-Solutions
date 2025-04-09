#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    if(num==0){
        printf("%d",sizeof(num)*8);
    }
    else{
        int count=0;
        while((num&1)==0){
            count++;
            num>>=1;
        }
        printf("%d",count);
    }
    return 0;
}