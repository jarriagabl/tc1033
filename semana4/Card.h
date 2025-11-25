#ifndef CARD_H
#define CARD_H

#include <cstdlib>
#include <ctime>
#include <string>

class Card
{
    // Static attribute
    // Compartido por todas las instancias de Card
    // Usado como un contador para generar numeros de tarjeta unicos
    static long next_number;

    long number;
    int cvv;
    double limit, debt;

public:
    Card(double limit): limit{limit}, debt{0}, number{next_number++}
    {
        srand(time(0)); // Usa tiempo actual como semilla para generador pseudoaleatorio
        cvv = rand() % 1000; // Valor entre 0 y 999
    }

    bool increase_debt(double);
    bool decrease_debt(double);
    std::string to_string();

    long get_number();
    int get_cvv();
    double get_limit();
    double get_debt();

    void set_limit(double);
};
#endif