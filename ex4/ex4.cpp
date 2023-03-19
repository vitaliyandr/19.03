#include <iostream>
using namespace std;

int main() {
    int profit[12];
    string months[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };


    for (int i = 0; i < 12; i++) {
        cout << "Enter profit for " << months[i] << ": ";
        cin >> profit[i];
    }


    int max_profit = profit[0], max_profit_index = 0;
    for (int i = 1; i < 12; i++) {
        if (profit[i] > max_profit) {
            max_profit = profit[i];
            max_profit_index = i;
        }
    }


    int min_profit = profit[0], min_profit_index = 0;
    for (int i = 1; i < 12; i++) {
        if (profit[i] < min_profit) {
            min_profit = profit[i];
            min_profit_index = i;
        }
    }


    cout << "Month with maximum profit: " << months[max_profit_index] << endl;
    cout << "Month with minimum profit: " << months[min_profit_index] << endl;

    return 0;
}