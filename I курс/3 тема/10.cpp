#include <stdio.h>
int main(){
    int response[99999], n = 0, k = 0, re = 0, r, rd = 0, s1, s2;
    printf("Введите число для факториала: ");
    scanf("%d", &k);
    response[0] = 1;
    n = 0;
    for (int i = 1; i<=k; i++) {
        re = 0;
        for (int j = 0; j<=n; j++) {
            r = response[j]*i+re;
            rd = r/10;
            re = r%10;
            response[j] = re;
            re=rd;
        }
        if(rd!=0){
            n++;
            response[n]=rd;
            while (response[n] >= 10) {
                s1 = response[n]%10;
                s2 = response[n]/10;
                response[n] = s1;
                n++;
                response[n] = s2;
            }
        }
    }
    
    for(int i = n; i >= 0; i--){
        printf("%d", response[i]);
    }
}