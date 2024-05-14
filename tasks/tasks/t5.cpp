#include <iostream>

double stepin(double x, int n) {
	if (n == 0) {
		return 1;
	}
	else if (n > 0) {
		return x * stepin(x, n - 1);
	}
	else {
		return 1 / stepin(x, -n);
	}
}

int main()
{
	double x;
	int n;
	std::cout << "Input x (-100 < x < 100) - ";
	std::cin >> x;
	if (x > 100 || x < -100) {
		std::cout << "Read condition!!!\n";
		return 0;
	}
	std::cout << "Input n - ";
	std::cin >> n;
	std::cout << "\nResult - " << stepin(x, n);
}