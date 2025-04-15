#include <bits/stdc++.h>

using namespace std;

bool ehPrimo (long long n) {

    if (n < 2) {
        return false;
    }
    else {
        for (long long i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}

int main(){
    long long n = 0;

    cin >> n;

    if (ehPrimo(sqrt(n)) == true) {
        cout << "SIM";
    }
    else {
        cout << "NAO";
    }
   
    return 0;
}
