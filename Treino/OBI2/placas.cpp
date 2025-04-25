#include <bits/stdc++.h>

using namespace std;

int main()
{
    string placa;
    cin >> placa;

    if (placa.size() == 7)
    {
        if (isupper(placa[0]) && isupper(placa[1]) && isupper(placa[2]) && isdigit(placa[3]) && isupper(placa[4]) && isdigit(placa[5]) && isdigit(placa[6]))
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    else if (placa.size() == 8)
    {
        if (isupper(placa[0]) && isupper(placa[1]) && isupper(placa[2]) && placa[3] == '-' && isdigit(placa[4]) && isdigit(placa[5]) && isdigit(placa[6]) && isdigit(placa[7]))
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}