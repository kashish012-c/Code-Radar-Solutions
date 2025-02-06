#include <stdio.h>
int main() {
    int a;
    int b;
    char ch;
    scanf("%d %d",&a,&b);
    scanf(" %c",&ch);
    switch(ch){
        case '+': printf("%d",a+b);
                  break;
        case '-': printf("%d",a-b);
                  break;
        case '*': printf("%d",a*b);
                  break;
        case '/':
        if(b==0){
            printf("error");
        }
        else{
            printf("%d",a/b);
            break;
        }
    }
    return 0;
}