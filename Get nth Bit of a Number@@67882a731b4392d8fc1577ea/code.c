#include <stdio.h>
int main() {
    int num,n;
    scanf("%d %d",&num,&n);
    int b=(num>>n)&1;
    printf("%d",b);
    return 0;
}