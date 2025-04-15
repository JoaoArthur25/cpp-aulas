#include <bits/stdc++.h>

using namespace std;

int main() {
    int numeroCandidatos, minimoAprovados;
    float notaCorte = 0;

    cout << "Digite o numero de candidatos e o minimo de aprovados: ";

    cin >> numeroCandidatos >> minimoAprovados;

    vector<float> notasCandidatos(numeroCandidatos);

    for (int i = 0; i < numeroCandidatos; i++) {
        cout << "Digite a nota do candidato " << i + 1 << ": ";
        cin >> notasCandidatos[i];
    }

    sort(notasCandidatos.begin(), notasCandidatos.end(), greater<int>());

    cout << "Notas: ";
    for (int i = 0; i < numeroCandidatos; i++) {
        cout << notasCandidatos[i] << " ";
    }

    notaCorte = notasCandidatos[numeroCandidatos - minimoAprovados - 1];
    cout << endl << "Nota de corte: " << notaCorte << endl;

    return 0;
}