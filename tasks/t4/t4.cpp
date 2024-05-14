#include <iostream>

int countWays(int n) {
    if (n <= 1) {
        return 1;
    }
    return countWays(n - 1) + countWays(n - 2);
}

int main() {
    int n;
    std::cout << "Input n (-1 < n < 45) - ";
    std::cin >> n;
    if (n > 45 || n < -1) {
        std::cout << "Read condition!!!\n";
        return 0;
    }
    std::cout << "Number of unique combinations: " << countWays(n) << std::endl;
    return 0;
}