#include <stdio.h>

int main(){
    int result = 0;
    int sum = 0;
    int squar = 0;
    for (int i = 1; i<=100; i++){
        sum += i;
        squar += i*i;
    }
    sum = sum*sum;
    result = sum-squar;
    return result;
}
// 25164150