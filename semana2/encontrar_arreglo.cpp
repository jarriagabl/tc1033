#include <iostream>

using std::cout;
using std::cin;

int main()
{
    int values[5]{12, 34, 42, 1, 10};
    cout << "Dame un valor: ";
    int value;
    cin >> value;
    for(int i{0}; i < std::size(values); ++i)
    {
        if(value == values[i])
        {
            cout << "Valor encontrado en posición " << i << "\n";
            return 0;
        }
    }
    cout << "El valor no fue encontrado!\n";
    return 0;
}