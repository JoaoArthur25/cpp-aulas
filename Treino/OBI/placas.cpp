#include <bits/stdc++.h>

using namespace std;

int main()
{
    string placa;
    cout << "Digite a placa do veiculo: ";
    cin >> placa;

    if (placa.size() == 7)
    {
        if (isupper(placa[0]) && isupper(placa[1]) && isupper(placa[2]) && isdigit(placa[3]) && isupper(placa[4]) && isdigit(placa[5]) && isdigit(placa[6]))
        {
            cout << "Mercosul" << endl;
        }
        else
        {
            cout << "Invalida" << endl;
        }
    }
    else if (placa.size() == 8)
    {
        if (isupper(placa[0]) && isupper(placa[1]) && isupper(placa[2]) && placa[3] == '-' && isdigit(placa[4]) && isdigit(placa[5]) && isdigit(placa[6]) && isdigit(placa[7]))
        {
            cout << "Brasileiro" << endl;
        }
        else
        {
            cout << "Invalida" << endl;
        }
    }
    else
    {
        cout << "Invalida" << endl;
    }

    return 0;
}