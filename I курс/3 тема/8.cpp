#include <stdio.h>
int n, i, m;
float a[100];
float b[100];
int main(){
    scanf("%d", &n);
    for (i = 0; i<n; i++) {
        scanf("%f", &a[i]);
    }
    b[0] = -a[0];
    b[1] = 1;
    for (int j = 1; j < n; j++) {
        b[j+1] = 1;
        for (int i = j; i > 0; i--) {
            b[i] = (b[i] * -1 * a[j] + b[i-1]);
        }
        b[0] = b[0] * -1 * a[j];
    }
    for (i = n; i >= 0; i--) {
        printf("%.1f ", b[i]);
        
    }
}