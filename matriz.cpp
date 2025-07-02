#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> A(n, vector<int>(n));
    vector<vector<int>> B(n, vector<int>(n));
    vector<vector<int>> resultado(n, vector<int>(n, 0));

    // Lê a primeira matriz
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> A[i][j];

    // Lê a segunda matriz
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> B[i][j];

    char operacao;
    cin >> operacao;

    if (operacao == 'a') {
        // Essa é a parte da soma
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                resultado[i][j] = A[i][j] + B[i][j];
    }
    else if (operacao == 's') {
        // aqui é feita a subtração
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                resultado[i][j] = A[i][j] - B[i][j];
    }
    else if (operacao == 'm') {
        // aqui é feita a multiplicação
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                for (int k = 0; k < n; k++)
                    resultado[i][j] += A[i][k] * B[k][j];
    }

    // resultado da matriz
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << resultado[i][j] << " ";
        cout << endl;
    }

    return 0;
}
