#include <stdio.h>

int main(){
    long result = 0;
    for (long i = 2560*2560; result == 0; i++){
        for (long j = 1; j <= 20; j++){
            if ((j == 20) && (i % j == 0)){
                result = i;
            }
            else if (i % j == 0){
                continue;
            }
            else{
                break;
            }
        }
    }
    return result;
}
// 232792560