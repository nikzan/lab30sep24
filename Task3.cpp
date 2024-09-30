#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0));  // random init

    int headsCount = 0;
    int tailsCount = 0;

    for (int i = 0; i < 20; ++i) {
        int flip = std::rand() % 2; // random generation
        if (flip == 0) {
            std::cout << "Орёл" << std::endl;
            headsCount++;
        } else {
            std::cout << "Решка" << std::endl;
            tailsCount++;
        }
    }

    std::cout << "Орёл выпал " << headsCount << " раз(а)." << std::endl;
    std::cout << "Решка выпала " << tailsCount << " раз(а)." << std::endl;

    return 0;
}