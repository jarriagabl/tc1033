#include <iostream>
#include "Account.h"
#include "Branch.h"

using std::cout;

int main()
{
    Branch b{"Lago de Guadalupe", "Lago de Guadalupe km 43"};
    Account a1{10000, b, 30000};
    Account a2{5000, b, 10000};
    cout << "Account 1:\n" << a1.to_string() << "\n";
    cout << "Account 2:\n" << a2.to_string() << "\n";
    a1.deposit(500);
    a2.withdraw(1000);
    a1.pay_with_card(15000);
    a1.pay_card(500);
    cout << "Account 1:\n" << a1.to_string() << "\n";
    cout << "Account 2:\n" << a2.to_string() << "\n";
}