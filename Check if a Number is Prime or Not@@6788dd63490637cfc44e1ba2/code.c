#include <stdio.h>
int main() {
     int num,i=2,x=1;
     scanf("%d",&num);
     while(i<(num/2)){
        if(num%i==0){
            x=0;
            break;
        }
        i++
     }
     if(x==0){
        printf("Not Prime");
     }
     else{
        printf("Prime");
     }
    return 0;
}