#include <iostream>
#include <vector>
#include <string>
#include "Cliente.h"
#include "Paquete.h"

using std::cout;
using std::cin;

int main()
{
    std::string nombre_r, direccion_r, telefono_r; // Datos remitente
    int horario;

    cout << "Bienvenido al sistema de paquetería. Por favor provea sus datos.\n";
    cout << "Nombre: ";
    std::getline(cin, nombre_r); // Usamos getline para leer linea entera (cin solo lee hasta espacio)
    
    cout << "Dirección: ";
    std::getline(cin, direccion_r);
    
    cout << "Teléfono: ";
    std::getline(cin, telefono_r);
    
    Cliente remitente{nombre_r, direccion_r, telefono_r};
    
    cout << "Horario de recolección (0-23 horas): ";
    cin >> horario;

    int n;
    std::vector<Paquete> paquetes;
    std::string nombre_d, direccion_d, telefono_d;
    double largo, ancho, alto, peso;
    Cliente destinatario;
    
    cout << "\nCuántos paquetes enviará?: ";
    cin >> n;
    for(int i{0}; i < n; ++i)
    {
        std::cin.ignore(); // Limpia el buffer de lectura, necesario al combinar cin y getline
        
        cout << "\nProvea los datos del remitente.\n";
        cout << "Nombre: ";
        std::getline(cin, nombre_d);
        
        cout << "Dirección: ";
        std::getline(cin, direccion_d);
        
        cout << "Teléfono: ";
        std::getline(cin, telefono_d);
        
        // reusamos variable para multiples destinatarios
        destinatario = Cliente{nombre_d, direccion_d, telefono_d}; 
        
        cout << "Provea las dimensiones del paquete (largo ancho alto peso): ";
        cin >> largo >> ancho >> alto >> peso;
        
        paquetes.push_back(Paquete{peso, alto, ancho, largo, horario, remitente, destinatario});
    }

    cout << "\nGenerando etiquetas...\n";
    for(auto p : paquetes)
    {
        cout << "\n***************************\n";
        cout << p.generar_etiqueta();
        cout << "\n***************************\n";
    }
}