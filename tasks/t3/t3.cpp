#include <iostream>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    std::cout << "Input n - ";
    std::cin >> n;
    std::cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << std::endl;
    return 0;
}