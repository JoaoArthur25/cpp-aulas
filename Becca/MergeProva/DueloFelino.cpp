#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;

    cin >> n;

    int contadorPar1 = 0;
    int contadorImpar1 = 0;

    int contadorPar2 = 0;
    int contadorImpar2 = 0;

    vector<int> a(n);
    vector<int> b(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            contadorPar1++;
        }
    }

    contadorImpar1 = n - contadorPar1;

    for(int i = 0; i < n; i++){
        if(b[i] % 2 == 0){
            contadorPar2++;
        }
    }

    contadorImpar2 = n - contadorPar2;

    if(contadorImpar2 >= contadorPar1 && contadorPar2 >= contadorImpar1){
        cout << "SIM" << endl;
    } else {
        cout << "NAO" << endl;
    }

    return 0;
}