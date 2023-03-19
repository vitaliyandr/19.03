#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleOutputCP(1251);
    const int NUM_SIDES = 5;
    double sides[NUM_SIDES];
    double perimeter = 0;

    for (int i = 0; i < NUM_SIDES; i++) {
        std::cout << "Введіть довжину " << i + 1 << "-ї сторони: ";
        std::cin >> sides[i];
        perimeter += sides[i];
    }

    std::cout << "Периметр п'ятикутника: " << perimeter << std::endl;

    return 0;
}