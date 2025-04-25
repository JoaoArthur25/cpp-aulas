#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n;
    cin >> m;

    vector<vector<int>> matriz(n, vector<int>(m));

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}