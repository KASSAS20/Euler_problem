#include <stdio.h>

int main(){
    long long result = 0;
    int count = 0;
    for (long long i = 1; count<=10001; i++){
        int count_j;
        for (long long j = 1; j*j<=i; j++){
            if ((i % j == 0) && (j != 1) && (j != i)){
                count_j++;
                break;
            }
        if (count_j == 0){
            count++;
            result = i;
            printf("%d\n", count);
        }
        }
    }
    printf("%lld", result);
}
// 104743