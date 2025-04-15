#include <bits/stdc++.h>

using namespace std;

int main() {

    int a, b, c, d;

    cin >> a >> b;
    cin >> c >> d;

    if((a + c == b && b == d) || (b + d == a && a == c) || (a + d == c && c == b) || (b + c == a && a == d)){
        cout << "SIM" << endl;
    } else {
        cout << "NAO" << endl;
    }

    return 0;
}