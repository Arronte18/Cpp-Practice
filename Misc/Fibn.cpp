#include <iostream>


int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;

    int a = 0, b = 1, fib = 0;
    for (int i = 2; i <= n; ++i) {
        fib = a + b;
        a = b;
        b = fib;
    }
    return b;
}

int main(){
    int n = fibonacci(34);

    std::cout << "Your fibonacci number is: " << n << std::endl;
    return 0;
}