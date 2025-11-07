#include <iostream>

int main()
{
    float altura, base, area;
    std::cout << "Dame la altura del rectángulo: ";
    std::cin >> altura;
    std::cout << "Dame la base del rectángulo: ";
    std::cin >> base;
    area = base * altura;
    std::cout << "El área del rectángulo es " << area << "\n";
    return 0;
}