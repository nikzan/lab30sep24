#include <iostream>

int main() {
    int N;
    std::cout << "Введите натуральное число N (< 1000000000): ";
    std::cin >> N;

    if (N <= 0 || N >= 1000000000) {
        std::cerr << "Число должно быть натуральным и меньше 1000000000." << std::endl;
        return 1;
    }

    int maxDigit = -1;
    int maxPosition = -1;
    int position = 1;

    while (N > 0) {
        int digit = N % 10;
        if (digit > maxDigit) {
            maxDigit = digit;
            maxPosition = position;
        }
        N /= 10;
        position++;
    }

    std::cout << "Максимальная цифра: " << maxDigit << std::endl;
    std::cout << "Порядковый номер: " << maxPosition << std::endl;

    return 0;
}