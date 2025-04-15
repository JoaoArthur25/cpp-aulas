#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, q;
    cin >> n >> q;

    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    reverse(a.begin(), a.end());

    while(q--){
        int x, y;

        cin >> x >> y;

        int resposta = 0;

        for(int i = x - y; i < x; i++){
            resposta += a[i];
        }
        cout << resposta << endl;
    }
    

    return 0;
}