#include <stdio.h>
int main(){
    int y;
    scanf("%d,&y");
    if(Y%4==0 && Y%100!=0){
        printf("Leap Year");
    }
    else if (y%400==0){
        printf("Leap Year");
    }
    else{printf("Not a Leap Year");}
    return 0;
}