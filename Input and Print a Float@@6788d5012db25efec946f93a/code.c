#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    printf("%s", welcome());
    float a;
    scanf("%f",&a);
    printf("you entered: %f",a);
    return 0;
}