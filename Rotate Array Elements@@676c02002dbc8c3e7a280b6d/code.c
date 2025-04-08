#include <stdio.h>

int main() {
    int n, r;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &r);
    r = r % n;
    int temp[r];
    for (int i = 0; i < r; i++) {
        temp[i] = arr[i];
    }
    for (int i = 0; i < n - r; i++) {
        arr[i] = arr[i + r];
    }
    for (int i = 0; i < r; i++) {
        arr[n - r + i] = temp[i];
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
