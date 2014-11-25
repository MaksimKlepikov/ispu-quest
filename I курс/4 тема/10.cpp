#include <stdio.h>
bool is_easy(int x){
    for (int j = 2; j <= x/2; j++) {
        if(x%j == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    scanf("%d", &n);
    for (int i = n; i <= 2*n-2; i++) {
        if (is_easy(i) && is_easy(i+2)) {
            printf("%d %d\n", i, i+2);
        }
    }
}
