#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    string currencies[10] = {"USD", "EUR", "GBP", "INR", "JPY", "AUD", "CAD", "CHF", "CNY", "NZD"};
    

    double rates[10] = {1.0, 0.93, 0.82, 82.0, 134.0, 1.5, 1.34, 0.91, 6.86, 1.63};
    
    int from, to;
    double amount, converted;

    cout << "Available currencies:\n";
    for (int i = 0; i < 10; i++)
        cout << i+1 << ". " << currencies[i] << endl;

    cout << "\nEnter the number of the currency you want to convert FROM: ";
    cin >> from;
    cout << "Enter the number of the currency you want to convert TO: ";
    cin >> to;
    cout << "Enter the amount: ";
    cin >> amount;

    converted = amount / rates[from-1] * rates[to-1];

    cout << fixed << setprecision(2);
    cout << amount << " " << currencies[from-1] << " = " << converted << " " << currencies[to-1] << endl;

    return 0;
}
