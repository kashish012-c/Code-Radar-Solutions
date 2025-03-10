#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int num;
        scan("%d",&num);
        printf("%d\n", isPrime(num));
    }
    return 0;   
}
int isPrime(int num){
    for(int i=2, i<= num /2; i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1; 
}