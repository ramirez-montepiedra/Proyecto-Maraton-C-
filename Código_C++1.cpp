/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float radio, area;
    cout << "Ingrese el radio del círculo: ";
    cin >> radio;
    area = M_PI * radio * radio;
    cout << "El área es: " << area << endl;
    return 0;
}