#include <stdio.h>
int main(){
    int i,j,n;
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            printf("%c ",65+j);
        }
        printf("\n");
    }
}