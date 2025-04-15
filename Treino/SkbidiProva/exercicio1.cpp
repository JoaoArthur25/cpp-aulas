#include <bits/stdc++.h>

using namespace std;

int main()
{
    string texto;
    cin >> texto;

    transform(texto.begin(), texto.end(), texto.begin(), ::tolower);

    if (texto.size() >= 2) {
        texto[texto.size() - 1] = ' ';
        texto[texto.size() - 2] = 'i';

        cout << texto << endl;
    }

    return 0;
}