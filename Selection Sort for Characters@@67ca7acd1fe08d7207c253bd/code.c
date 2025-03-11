#include <stdio.h>
void selectionSort(char arr[],int n){
    for(int i=0;i<n-1;i++){
        int si=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[si]){
                si=j;
            }
        }
        if(si!=i){
        char temp=arr[i];
        arr[i]=arr[si];
        arr[si]=arr[i];}
    }
}
void printArray(char arr[],int n){
    for(int i=0;i<n;i++){
        printf("%c ",arr[i]);
    }
}