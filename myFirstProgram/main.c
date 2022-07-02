#include <stdio.h>

int main(){
    printf("programming is fun ...\n");
    printf("summation of 4 and 3 is: 7\n");
    printf("summation of %d and %d is: %d\n", 4, 5, 9);

    int a = 10, b= 5, c = 15;
    printf("summation of %d and %d is: %d\n", a, b, c);

    int x = 9, y = 10, z = x * y;
    printf("multiplication of %d and %d is: %d\n", x, y, z);

    int p = 11, q = 10, r;
    printf("multiplication of %d and %d is: %d\n", p, q, r = p * q);

    int j = 10, k = 12;
    printf("multiplication of %d and %d is: %d", j, k, j * k);
    return 0;
}
