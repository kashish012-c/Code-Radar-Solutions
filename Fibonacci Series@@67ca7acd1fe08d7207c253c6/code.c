void fibonacciSeries(int n){
    if(n<=1){
        printf("%d ",n);
    }
    printf("%d ",fibonacciSeries(n-1)+fibonacciSeries(n-2));
}