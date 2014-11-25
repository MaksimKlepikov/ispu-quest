#include <stdio.h>
int f[100];
int k = 0, m = 0, y = 0;
int n = 0;

int del(int k, int m){
    for (int i = k + 1; i <= m; i++) {
        if (m%i == 0) {
            return i;
        }
    }
    return 0;
}

int gorn(int f[100], int x, int n){
    int y = f[0]*x + f[1];
    for (int i = 2; i <= n; i++){
        y = y * x + f[i];
    }
    return y;
}

int main(){
    scanf("%d", &n);
    n--;
    for (int i = 0; i <= n; i++) {
        scanf("%d", &f[i]);
    }
    m = f[n];
    if(f[n] == 0){
        printf("x = 0");
    } else {
        k = 0;
        while (m!=k){
            k = del(k, m);
            y = gorn(f, k, n);
            if(y == 0) {
                printf("x = %d\n", k);
            }
            y = gorn(f, k * (-1), n);
            if(y == 0) {
                printf("x = %d\n", k);
            }
        }
    }
}