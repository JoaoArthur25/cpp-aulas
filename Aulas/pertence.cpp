#include <bits/stdc++.h>

using namespace std;

int main()
{   

    int n = 0;
    cin >> n;

    bool pertence = false;

    int x = 0;
    cin >> x;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        if (v[i] == x) {
            pertence = true;
            break;
        }
    }

    return 0;
}