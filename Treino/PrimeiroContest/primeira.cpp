#include <bits/stdc++.h>

using namespace std;

int main() {

    int k;

    cin >> k;

    vector<int> v(3);

    for(int i = 0; i < k; i++){

        for(int j = 0; j < 3; j++){
            cin >> v[j];
        }

        sort(v.begin(), v.end());

        if(v[0] != v[1] && v[0] != v[2]){
            cout << v[0] << endl;
        } else if( v[1] != v[0] && v[1] != v[2]){
            cout << v[1] << endl;
        } else {
            cout << v[2] << endl;
        }
    }

    return 0;
}