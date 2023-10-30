#include <stdio.h>

int main(){
    long long result;
    long long num = 600851475143;
    for (long long i = 2; i*i <= num; i++){
        if (num % i == 0){
            int count = 0;
            for (long long j = 2; j <= i; j++){
                if (i % j == 0){
                    count++;
                }
                if (count>1){
                    break;
                }}
            if (count<2){
                result = i;
            }
        }
    }
    
    return result;
}
// 6857