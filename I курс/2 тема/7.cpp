//Вводить числа до 4!!! Числа больше 4 высчитываются очень долго!!!
#include <stdio.h>
int n, start, current, sum;
bool flag = false;
int main() {
    printf("Vvedite kol-vo chisel\n");
    scanf("%d", &n);
    current = 1;
    start   = 1;
    sum     = 0;
    while (start <= n) {
            for (int i = 0; i<=current/2; i++) {
                if(current%i == 0){
                    sum += i;
                }
            }
            if (sum == current) {
                printf("%d ", current);
                start++;
            }
        sum = 0;
        current++;
    }
}