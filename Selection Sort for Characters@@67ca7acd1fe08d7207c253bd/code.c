#include <stdio.h>
void selectionSort(char arr[],int n){
    for(int i=0;i<n;i++){
        int si=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[si]){
                si=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[si];
        arr[si]=arr[i];
    }
}
void printArray(char arr[],int n){
    for(int i=0;i<n;i++){
        printf("%c ",arr[i]);
    }
}