#include <bits/stdc++.h>
using namespace std;

struct Fruta {
    string nome;
    string cor;
    int calorias;
};

int main() {
    map<string, Fruta> frutas = {
        {"banana", {"banana", "branca", 89}},
        {"maca", {"maca", "vermelha", 55}},
        {"mamao", {"mamao", "laranja", 108}},
        {"tangerina", {"tangerina", "laranja", 40}}};

    vector<string> nomesFrutas;
    vector<string> coresConsumidas;
    int totalCalorias = 0;

    cout << "Programa de auxilio nutricional." << endl;
    cout << "Voce pode informar ate 3 frutas consumidas. Digite 'fim' ou 'sair' para encerrar antes." << endl;

    while (nomesFrutas.size() < 3) {
        string fruta;
        int quantidade;
        int contador = 1;

        cout << "Digite a fruta " << contador << ": ";
        getline(cin, fruta);
        contador++;
        
        for (size_t i = 0; i < fruta.size(); i++) {
            fruta[i] = tolower(fruta[i]);
        }

        if (fruta == "fim" || fruta == "sair") {
            break;
        }

        if (frutas.find(fruta) != frutas.end()) {
            cout << "Quantas unidades? ";
            cin >> quantidade;
            cin.ignore();

            Fruta f = frutas[fruta];
            totalCalorias += f.calorias * quantidade;
            nomesFrutas.push_back(fruta);
            coresConsumidas.push_back(f.cor);

            cout << "--------------------------------" << endl;
        } else {
            cout << "Fruta não reconhecida, tente novamente." << endl;
        }
    }

    cout << "\n========= RESUMO =========" << endl;
    cout << "Total de frutas: " << nomesFrutas.size() << endl;
    cout << "Total de calorias: " << totalCalorias << endl;

    set<string> coresUnicas(coresConsumidas.begin(), coresConsumidas.end());

    if (nomesFrutas.size() < 3) {
        cout << "Procure consumir 3 frutas ao dia, de cores diferentes." << endl;
    } else if (coresUnicas.size() < 3) {
        cout << "Consumir frutas de cores diferentes e mais saudavel." << endl;
    } else {
        cout << "Parabens! Voce consumiu frutas variadas e coloridas!" << endl;
    }

    return 0;
}
