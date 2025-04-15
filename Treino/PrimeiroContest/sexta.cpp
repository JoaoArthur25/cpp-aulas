#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int numeroGrupos;

        if(n % 2 == 0){
            numeroGrupos = n/2;
        } else {
            numeroGrupos = (n-1)/2;
        }

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        int soma = 0;

        for(int i = 1; i <= numeroGrupos; i++){
          soma += v[n-i] - v[i-1];  
        }
        
        cout << soma << endl;

    }

    return 0;
}
