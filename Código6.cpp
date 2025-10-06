#include <iostream>
using namespace std;

int main() {
    int opcion;
    float saldo = 1000.0, cantidad;

    cout << "1. Consultar saldo\n2. Depositar\n3. Retirar\nOpción: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Saldo disponible: $" << saldo << endl;
            break;
        case 2:
            cout << "Cantidad a depositar: ";
            cin >> cantidad;
            saldo += cantidad;
            cout << "Nuevo saldo: $" << saldo << endl;
            break;
        case 3:
            cout << "Cantidad a retirar: ";
            cin >> cantidad;
            if (cantidad <= saldo) {
                saldo -= cantidad;
                cout << "Retiro exitoso. Nuevo saldo: $" << saldo << endl;
            } else {
                cout << "Fondos insuficientes." << endl;
            }
            break;
        default:
            cout << "Opción no válida." << endl;
    }

    return 0;
}
