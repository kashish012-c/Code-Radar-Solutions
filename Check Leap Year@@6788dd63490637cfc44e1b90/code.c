#include <stdio.h>
int main() {
    int y;
    scanf("%d",&y);
    if(y%4==0){
        if(y%100!=0){
            printf("Leap Year");
        }
        else{printf("Not a Laep Year");}
    }
    else if (y%400=0){
        printf("Leap year");
    }
    else{printf("Not a Leap Year");}
    return 0;
}