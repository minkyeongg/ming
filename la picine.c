#include <stdio.h>

long long arr[1000001] = {0};

int main() {
    int i, j;
    int n;
    int T;
    
    for(i = 1; i <= 1000000; i++) {
        for (j = 1; i * j <= 1000000; j++) {
            arr[i * j] += i;
        }
        
        arr[i] += arr[i-1];
    }
    
    scanf("%d", &T);
    
    for (i = 0; i < T; i++) {
        scanf("%d", &n);
        printf("%lld\n",arr[n]);
    }
    
    return 0;
}
