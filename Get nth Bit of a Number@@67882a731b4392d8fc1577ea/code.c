#include <stdio.h>
int main() {
    int num,n;
    scanf("%d",&num);
    scanf("%d",&n);
    int b=(num>>n)&1;
    printf("%d",b);
    return 0;
}