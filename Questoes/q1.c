#include <stdio.h>


int main() {

    int x;

    x = 7 + 3 * 6 / 2 - 1; 
    
    printf("Valor de X: %d\n", x);
    // 6 / 2 = 3  -> 7 + 3 * 3 - 1
    // 3 * 3 = 9  -> 7 + 9 - 1
    // 7 + 9 - 1 = 15

    x = 2 % 2 + 2 * 2 - 2 / 2;
    // 2 % 2 = 0 -> 0 + 2 * 2 - 2 / 2
    // 2 / 2 = 1 -> 2 * 2 - 1
    // 2 * 2 = 4 -> 4 - 1
    // 4 - 1 = 3

    printf("Valor de X: %d\n", x);

    x = (3 * 9 * (3 + (9 * 3 / (3))));
    // (3 * 9 * (3 + (9 * 3 / 3)))
    // 3 / 3 = 1 -> (3 * 9 * (3 + (9 * 1)))
    // 9 * 1 = 9 -> (3 * 9 * (3 + 9))
    // (3 + 9) = 12 -> (3 * 9 * 12)
    // (3 * 9 * 12) = 324



    printf("Valor de X: %d\n", x);

}
