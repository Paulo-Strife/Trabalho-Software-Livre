#include <iostream>
#include <cmath>

using namespace std;

bool ehPrimo(int numero) {
    if (numero < 2) return false;
    if (numero == 2) return true;
    if (numero % 2 == 0) return false;

    for (int i = 3; i * i <= numero; i += 2) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    cin >> num;

    cout << (ehPrimo(num) ? "Primo" : "Não é primo") << endl;

    return 0;
}