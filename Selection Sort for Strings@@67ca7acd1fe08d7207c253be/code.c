#include <stdio.h>
#include <string.h>
void selectionSort(char arr[][100],int n){
    for(int i=0;i<n-1;i++){
        int si=i;
        for(int j=i+1;j<n;j++){
            if(strcmp(arr[j],arr[si])<0){ //returns -ve value i str1<str2.
               si=j;
            }
        }
        if(arr[si]!=arr[i]){
            char temp[100];
            strcpy(temp,arr[i]);
            strcpy(arr[i],arr[si]);
            strcpy(arr[si],temp);}
    }
}
void printArray(char arr[][100], int n){
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
}