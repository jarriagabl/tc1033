#include "Cliente.h"

string Cliente::get_nombre()
{
    return nombre;
}

string Cliente::get_direccion()
{
    return direccion;
}

string Cliente::get_telefono()
{
    return telefono;
}

void Cliente::set_direccion(string direccion)
{
    this->direccion = direccion;
}

void Cliente::set_telefono(string telefono)
{
    this->telefono = telefono;
}

string Cliente::to_string()
{
    return nombre + "\n" + direccion + "\n" + telefono;
}