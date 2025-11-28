#include "Paquete.h"

double Paquete::get_peso()
{
    return peso;
}

double Paquete::get_alto()
{
    return alto;
}

double Paquete::get_ancho()
{
    return ancho;
}

double Paquete::get_largo()
{
    return largo;
}

int Paquete::get_horario_recoleccion()
{
    return horario_recoleccion;
}

Cliente& Paquete::get_remitente()
{
    return remitente;
}

Cliente& Paquete::get_destinatario()
{
    return destinatario;
}

void Paquete::set_horario_recoleccion(int horario)
{
    horario_recoleccion = horario;
}

void Paquete::set_destinatario(Cliente& d)
{
    destinatario = d;
}

string Paquete::generar_etiqueta()
{
    return "Remitente: " + remitente.to_string() + "\nDestinatario: " + destinatario.to_string()
        + "\n" + "Peso: " + std::to_string(peso) + "kg\nDimensiones: "
        + std::to_string(largo) + " X " + std::to_string(ancho) + " X "
        + std::to_string(alto);
}