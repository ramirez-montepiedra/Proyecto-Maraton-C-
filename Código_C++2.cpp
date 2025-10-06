#include <iostream>
using namespace std;

int main() {
    float temp;
    int opcion;
    cout << "1. Celsius a Fahrenheit\n2. Fahrenheit a Celsius\nOpción: ";
    cin >> opcion;
    cout << "Ingrese la temperatura: ";
    cin >> temp;

    if (opcion == 1)
        cout << "Fahrenheit: " << (temp * 9 / 5) + 32 << endl;
    else
        cout << "Celsius: " << (temp - 32) * 5 / 9 << endl;

    return 0;
}