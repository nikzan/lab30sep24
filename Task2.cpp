#include <iostream>

int main() {
    int N;
    std::cout << "Введите целое число N: ";
    std::cin >> N;

    if (N <= 0) {
        std::cerr << "Число должно быть больше нуля." << std::endl;
        return 1;
    }

    double number;
    double sum = 0.0;
    double product = 1.0;

    std::cout << "Введите " << N << " вещественных чисел: ";
    for (int i = 0; i < N; ++i) {
        std::cin >> number;
        sum += number;
        product *= number;
    }

    std::cout << "Сумма чисел: " << sum << std::endl;
    std::cout << "Произведение чисел: " << product << std::endl;

    return 0;
}