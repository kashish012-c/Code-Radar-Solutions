#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=1 ;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<=n;i++){
        if(arr[i]<=arr[i+1]);
        else if(arr[i]>arr[i+1]){
            printf("Not Sorted");
            break;
        }
    }
    printf("Sorted");
}