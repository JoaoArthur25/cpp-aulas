#include <bits/stdc++.h>

using namespace std;

int main() {

    int k;

    cin >> k;

    vector<int> v(2);

    for(int i = 0; i < k; i++){

        for(int j = 0; j < 2; j++){
            cin >> v[j];
        }

        sort(v.begin(), v.end());

        cout << v[0] << " " << v[1] << endl;
    }

    return 0;
}