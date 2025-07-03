#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int maior = -1000000;

    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        if (x > maior){
            maior = x;
        }
    }
    return 0;
}