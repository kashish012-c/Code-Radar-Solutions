int fibonacciSeries(int n){
    if(n<=1){
        return n;
    }
    return printf("%d ",fibonacciSeries(n-1)+fibonacciSeries(n-2));
}