#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main()
{
    string mi_nombre;
    cout << "Dame tu nombre: ";
    cin >> mi_nombre;
    cout << "Bienvenido " << mi_nombre << " al mundo de C++\n";
    return 0;
}