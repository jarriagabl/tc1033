#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
#include "Card.h"
#include "Branch.h"

class Account
{
    // Static attribute
    // Compartido por todas las instancias de Account
    // Usado como un contador para generar numeros de cuenta unicos
    static long next_number;

    long number;
    double balance;
    Branch& branch; // Referencia a objeto, por ser agregacion
    Card card; // Objeto, por ser composicion

public:
    Account(double balance, Branch& branch, double card_limit): balance{balance}, 
        branch{branch}, number{next_number++}, card{card_limit}
    {
    }

    bool deposit(double);
    bool withdraw(double);
    bool pay_with_card(double);
    bool pay_card(double);
    std::string to_string();

    long get_number();
    double get_balance();
    Branch& get_branch();
    Card& get_card();
};
#endif