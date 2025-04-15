#include <bits/stdc++.h>

using namespace std;

int main () {
    
    int n;
    cin >> n;

    float notasPesos[n][2];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 2; j++){
            cin >> notasPesos[i][j];
        }
    }

    int somaPesos = 0;
    
    for (int i = 0; i < n; i++){
        somaPesos += notasPesos[i][1];
    }
    
    int soma = 0;

    for (int i = 0; i < n; i++){
        soma += notasPesos[i][0] * notasPesos[i][1];
    }

    int media = soma/somaPesos;
        cout << media;

    return 0;
}