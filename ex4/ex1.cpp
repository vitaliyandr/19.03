#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleOutputCP(1251);
    int profits[6];
    int total_profit = 0;

    for (int i = 0; i < 6; i++) {
        std::cout << "Введіть прибуток за " << i + 1 << "-й місяць: ";
        std::cin >> profits[i];
        total_profit += profits[i];
    }

    std::cout << "Прибуток фірми за 6 місяців: " << total_profit << std::endl;

    return 0;
}