#include <iostream>

int main() {
    int n;
    std::cout << "Введите натуральное число n: ";
    std::cin >> n;

    if (n <= 0) {
        std::cerr << "Число должно быть натуральным (больше нуля)." << std::endl;
        return 1;
    }

    double result = 0.0;
    for (int i = 1; i <= n; ++i) {
        double term = 1.0;
        for (int j = 0; j < i; ++j) {
            term *= i;
        }
        std::cout << result << std::endl;
        result += term;
    }

    std::cout << "Результат: " << result << std::endl;

    return 0;
}