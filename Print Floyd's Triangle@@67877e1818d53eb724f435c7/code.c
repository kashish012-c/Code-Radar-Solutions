#include <stdio.h>
int main(){
    int i,j,a,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            a=1;
            printf("%d",a);
            a=a+1;
        }
        printf("\n");
    }
}