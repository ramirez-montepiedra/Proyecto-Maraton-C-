
#include <iostream>
using namespace std;

int main() {
    int n, mayor;
    cout << "Cantidad de números: ";
    cin >> n;

    int num;
    cin >> mayor;
    for (int i = 1; i < n; ++i) {
        cin >> num;
        if (num > mayor) mayor = num;
    }