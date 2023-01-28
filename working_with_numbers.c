#include<stdio.h>
#include<math.h>

int main() {
    printf("%d\n\n", 99*99);

    // have to specify the proper formatter and input a decimal
    printf("%f\n\n", 7 / 4.0);

    // 2 to the 5 power 2^5
    int number = pow(2, 5);
    printf("%d\n", number);
    printf("%f\n", pow(2, 5));

    // take a number's square root
    printf("%f\n", sqrt(16));

    // round up
    printf("%f\n", ceil(49.7759));

    // round down
    printf("%f", floor(49.7759));

    return 0;
}