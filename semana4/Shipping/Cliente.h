#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>

using std::string;

class Cliente
{
private:
    string nombre, direccion, telefono;

public:
    Cliente(): nombre{"Juan Perez"}, direccion{"Avenida Falsa 123"}, telefono{"1234567"}
    {}

    Cliente(string nombre, string direccion, string telefono): nombre{nombre}, direccion{direccion}, telefono{telefono}
    {}

    string get_nombre();
    string get_direccion();
    string get_telefono();

    void set_direccion(string);
    void set_telefono(string);

    string to_string();
};
#endif