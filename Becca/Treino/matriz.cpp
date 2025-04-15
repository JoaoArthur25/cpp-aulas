#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;

    cin >> n;

    float notas_pesos[n][2];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++)
        {
            cin >> notas_pesos[i][j];
        }
    }

    int somaPesos = 0;

    for (int i = 0; i < n; i++) {
        somaPesos += notas_pesos[i][1];
    }

    int soma = 0;

    for (int i = 0; i < n; i++) {
        soma += notas_pesos[i][0] * notas_pesos[i][1];
    }

    float media = 0;

    media = soma / somaPesos;

    cout << media;

    return 0;
}