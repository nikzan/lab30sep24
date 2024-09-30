#include <iostream>
#include <cmath>

// Функция для вычисления суммы n первых членов ряда Тейлора для e^x
double TaylorSeriesExponential(int n, double x) {
    double sum = 1.0;  // Первый член ряда (1)
    double term = 1.0; // Для хранения текущего члена ряда

    for (int i = 1; i < n; ++i) {
        term *= x / i;  // Следующий член ряда
        sum += term;
    }

    return sum;
}

int main() {
    int n;
    double x;

    std::cout << "Введите количество членов ряда (n): ";
    std::cin >> n;
    std::cout << "Введите значение x: ";
    std::cin >> x;

    // Вычисление аппроксимации ряда Тейлора
    double approx = TaylorSeriesExponential(n, x);
    double exact = std::exp(x);  // значение exp ( cmath )

    std::cout << "Аппроксимация e^" << x << " рядом Тейлора с " << n << " членами: " << approx << std::endl;
    std::cout << "Точное значение e^" << x << ": " << exact << std::endl;

    return 0;
}