#include <bits/stdc++.h>

using namespace std;

int main()
{
    int e, d, resultado = 0;

    cin >> e >> d;

    if(e > d){
        resultado = e + d;
    } else {
        resultado = 2 * (d - e);
    }

    return 0;
}