#include <stdio.h>

int main(){
    int result = 0;
    for (int i = 999; i>99; i--){
        for (int j = 999; j>99; j--){
            int num = i * j;
            int num_2 = num;
            int reversed = 0;
            while (num != 0) {
                reversed = reversed * 10 + num % 10;
                num /= 10;
            }
            if (num_2 == reversed){
                if (result < num_2){
                    result = num_2;
                    break;
                }
            }
        }
    }
    return result;
}
// 906609