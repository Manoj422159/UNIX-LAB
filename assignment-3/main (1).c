#include <stdio.h>
#include "functions.h"

int main() {
    int num = 10;
    int fib_result = fibonacci(num);
    printf("Fibonacci of %d is %d\n", num, fib_result);

    int prime_num = 13;
    if (is_prime(prime_num))
        printf("%d is a prime number\n", prime_num);
    else
        printf("%d is not a prime number\n", prime_num);

    return 0;
}
