#include <stdio.h>
int mainn(){
    int a,b;
    scanf("%d %d",&a,&b);
    a=a|(1<<b);
    printf("%d",a);
}