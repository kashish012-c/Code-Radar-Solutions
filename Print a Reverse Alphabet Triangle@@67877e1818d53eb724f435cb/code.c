#include <stdio.h>

int main() {
    int i, j;
    int n;
    scanf("%d",&n);

    for(i = 0; i < rows; i++) {
        for(j = 0; j < rows - i; j++) {
            printf("%c ", 65 + j);
        }
        printf("\n");
    }

    return 0;
}
