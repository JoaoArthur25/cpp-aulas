#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;

    cin >> n;

    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    for(int i = 0; i < n; i++){
        c[i] = b[i]/a[i];
    }

    sort(c.begin(), c.end());

    cout << c[0] << endl;

    return 0;
}