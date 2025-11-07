#include <iostream>

using std::cout;
using std::cin;

int main()
{
    int n1, n2;
    char op;
    cout << "Dame un número: ";
    cin >> n1;
    cout << "Dame otro número: ";
    cin >> n2;
    cout << "Selecciona operación (+, -, *, /, %): ";
    cin >> op;
    switch(op)
    {
        case '+':
            cout << "El resultado de sumar es " << n1 + n2 << "\n";
            break;
        case '-':
            cout << "El resultado de restar es " << n1 - n2 << "\n";
            break;
        case '*':
            cout << "El resultado de multiplicar es " << n1 * n2 << "\n";
            break;
        case '/':
            cout << "El resultado de dividir es " << n1 / n2 << "\n";
            break;
        case '%':
            cout << "El residuo es " << n1 % n2 << "\n";
            break;
        default:
            cout << "Opción inválida\n";
    }
    return 0;
}