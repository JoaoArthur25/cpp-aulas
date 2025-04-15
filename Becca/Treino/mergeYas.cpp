#include <bits/stdc++.h>

using namespace std;

int main () {

    int x;
    int n;
    
    cin >> x >> n;

    if (n % x == 0) {
        cout << n/x;
    }
    else {
        cout << "ERROU";
    }

    return 0;
}