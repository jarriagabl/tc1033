#include "Account.h"

// Valor inicial para numeros de cuenta
long Account::next_number = 2000000;

bool Account::deposit(double amount)
{
    if(amount > 0)
    {
        balance += amount;
        return true;
    }
    return false;
}

bool Account::withdraw(double amount)
{
    if(amount > 0 and amount <= balance)
    {
        balance -= amount;
        return true;
    }
    return false;
}

bool Account::pay_with_card(double amount)
{
    return card.increase_debt(amount);
}

bool Account::pay_card(double amount)
{
    if(withdraw(amount))
    {
        card.decrease_debt(amount);
        return true;
    }
    return false;
}

std::string Account::to_string()
{
    return "\t{Number: " + std::to_string(number) 
        + "\n\tBalance: $" + std::to_string(balance)
        + "\n\t" + branch.to_string()
        + "\n\t" + card.to_string() + "}";
}

long Account::get_number()
{
    return number;

}
double Account::get_balance()
{
    return balance;
}

Branch& Account::get_branch()
{
    return branch;
}

Card& Account::get_card()
{
    return card;
}