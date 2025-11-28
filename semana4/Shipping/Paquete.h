#ifndef PAQUETE_H
#define PAQUETE_H

#include <string>
#include "Cliente.h"

using std::string;

class Paquete
{
private:
    double peso, alto, ancho, largo;
    int horario_recoleccion;
    Cliente& remitente;
    Cliente& destinatario;

public:
    Paquete(double peso, double alto, double ancho, double largo, int horario, Cliente& r, Cliente& d): peso{peso}, alto{alto}, ancho{ancho}, largo{largo}, horario_recoleccion{horario}, remitente{r}, destinatario{d}
    {}

    double get_peso();
    double get_alto();
    double get_ancho();
    double get_largo();
    int get_horario_recoleccion();
    Cliente& get_remitente();
    Cliente& get_destinatario();

    void set_horario_recoleccion(int);
    void set_destinatario(Cliente&);

    string generar_etiqueta();
};

#endif