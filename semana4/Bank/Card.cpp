#include "Card.h"

// Valor inicial para numeros de tarjeta
long Card::next_number = 1000000;

bool Card::increase_debt(double amount)
{
    if(debt + amount <= limit)
    {
        debt += amount;
        return true;
    }
    return false;
}

bool Card::decrease_debt(double amount)
{
    if(debt - amount >= 0)
    {
        debt -= amount;
        return true;
    }
    return false;
}

std::string Card::to_string()
{
    return "Card{Number: " + std::to_string(number) 
        + ", CVV: " + std::to_string(cvv)
        + ", Limit: $" + std::to_string(limit)
        + ", Debt: $" + std::to_string(debt) 
        + "}";
}

long Card::get_number()
{
    return number;
}

int Card::get_cvv()
{
    return cvv;
}

double Card::get_limit()
{
    return limit;
}

double Card::get_debt()
{
    return debt;
}

void Card::set_limit(double limit)
{
    if(limit > 0)
    {
        this->limit = limit;
    }
}