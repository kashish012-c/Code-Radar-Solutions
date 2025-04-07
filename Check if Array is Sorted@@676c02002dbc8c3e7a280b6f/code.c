#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=1 ;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    int isorted=1;
    for(int i=1;i<=n;i++){
        if(arr[i]>arr[i+1]){
            isorted=0;
            break;
        }
    }
    if(isorted){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
}