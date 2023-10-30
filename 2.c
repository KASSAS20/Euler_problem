#include <stdio.h>

int main(){
    int a = 0;
    int b = 1;
    int result;
    while (1)
    {
        if ((a + b) % 2 == 0){
            result = result + a + b;
        }
        int c = b;
        b = a+b;
        a = c;
        if (b > 4000000){
            break;
        }
    }
    return result;
}
// 4613732