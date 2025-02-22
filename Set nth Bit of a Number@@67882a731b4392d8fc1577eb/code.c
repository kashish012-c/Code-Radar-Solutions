#include <stdio.h>
int mainn(){
   int num,n;
   scanf("%d %d",&num,&n);
   num = num | (1<<n);
   printf("%d",num);
}