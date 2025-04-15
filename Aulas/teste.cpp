#include <bits/stdc++.h>

using namespace std;

int main()
{

    int soma = 0;

    for (int i = 0; i <= 10000; i += 2){
        soma += i;
    }

    cout << soma << endl;
}