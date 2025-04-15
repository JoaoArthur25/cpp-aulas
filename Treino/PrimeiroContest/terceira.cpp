#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        bool temRepetido = false;
        for (int i = 1; i < n; i++) {
            if (v[i] == v[i - 1]) {
                temRepetido = true;
                break;
            }
        }

        if (temRepetido){
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
           
    }

    return 0;
}
