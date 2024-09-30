#include <iostream>

int main() {
    int N;
    std::cout << "Введите целое число N (> 0): ";
    std::cin >> N;

    if (N <= 0) {
        std::cerr << "Число должно быть больше нуля." << std::endl;
        return 1;
    }

    std::cout << "Цифры числа, начиная с самой правой: ";
    while (N > 0) {
        int digit = N % 10;
        std::cout << digit << " ";
        N /= 10;
    }
    std::cout << std::endl;

    return 0;