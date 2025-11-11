#include <iostream>

using std::cout;
using std::cin;

int main()
{
    int values[5]{};
    cout << "Dame 5 valores: ";
    for(int i{0}; i < std::size(values); ++i)
    {
        cin >> values[i];
    }
    float total{0};
    for(int i{0}; i < std::size(values); ++i)
    {
        total += values[i];
    }
    cout << "El promedio de los valores es " << total / std::size(values) << "\n";
}