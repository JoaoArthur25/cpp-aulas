#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    char matriz[n][n], novaMatriz[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matriz[i][j];
        }
    }

    while (q--) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int celulasVizinhas = 0;

                for (int di = -1; di <= 1; di++) {
                    for (int dj = -1; dj <= 1; dj++){
                        if (di == 0 && dj == 0)
                            continue;

                        int ni = i + di;
                        int nj = j + dj;

                        if (ni >= 0 && ni < n && nj >= 0 && nj < n && matriz[ni][nj] == '1') {
                            celulasVizinhas++;
                        }
                    }
                }

                if (matriz[i][j] == '0') {
                    novaMatriz[i][j] = (celulasVizinhas == 3) ? '1' : '0';
                }
                else {
                    novaMatriz[i][j] = (celulasVizinhas == 2 || celulasVizinhas == 3) ? '1' : '0';
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                matriz[i][j] = novaMatriz[i][j];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j];
        }
        cout << endl;
    }

    return 0;
}
