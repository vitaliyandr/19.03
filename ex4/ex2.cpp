#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleOutputCP(1251);
    const int ARRAY_SIZE = 5;
    int myArray[ARRAY_SIZE] = { 1, 2, 3, 4, 5 };

    std::cout << "Оригінальний масив: ";
    for (int i = 0; i < ARRAY_SIZE; i++) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Масив у зворотному порядку: ";
    for (int i = ARRAY_SIZE - 1; i >= 0; i--) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}