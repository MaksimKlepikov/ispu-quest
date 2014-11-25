#include <stdio.h>
int main(){
    int n, i = 0, s=1, b = 0;
    scanf("%d", &n);
    while (i<n) {
        for (int j = 2; j<=(s+2)/2; j++) {
            if (s%j  == 0 || (s+2)%j == 0) {
                b = 1;
                break;
            }
        }
        if(b == 0){
            printf("%d %d\n", s, s+2);
            i++;
        } else {
            b = 0;
        }
        s++;
    }
}
