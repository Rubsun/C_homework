#include <stdio.h>

int main(){
    int n, res;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++){
        if (arr[i] > 0) {
            res++;
        }
    }
    printf("%d", res);
}
