#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    float notaCorte = 0;

    cin >> n >> m;

    vector<float> notasCandidatos(n);

    for (int i = 0; i < n; i++) {
        cin >> notasCandidatos[i];
    }

    sort(notasCandidatos.begin(), notasCandidatos.end(), greater<int>());
    
    notaCorte = notasCandidatos[m - 1];
    
    cout << notaCorte << endl;

    return 0;
}