#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<vector<int>> A(n, vector<int>(n));
    vector<vector<int>> B(n, vector<int>(n));
    vector<vector<int>> resultado(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> b[i][j];
        }
    }
    char operacao;
    cin >> operacao;

    // essa é a parte da soma.
    if (operacao == a)[
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                resultado[i][j] = a[i][j] + b[i][j];
            }
        }
    ]
    
    return 0;
}