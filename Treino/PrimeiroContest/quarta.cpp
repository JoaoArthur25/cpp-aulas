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

    vector<long long> pref(n);

    pref[0] = a[0];

    for(int i = 1; i < n; i++){
        pref[i] = pref[i-1] + a[i];
    }

    while(q--){
        int x, y;

        cin >> x >> y;

        long long resposta = 0;

        for(int i = x - y; i < x; i++){
            resposta += a[i];
        }

        int l = x-y;
        int r = x -1;

        if(l != 0){
            resposta = pref[r] - pref[l-1];
        } else {
            resposta = pref[r];
        }

        cout << resposta << endl;
    }
    

    return 0;
}