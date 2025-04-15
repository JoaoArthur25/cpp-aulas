#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x = 0;
    int y = 1;
    int n = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        cout << x << " ";
        int z = x + y;
        x = y;
        y = z;
    }
    cout << endl;
}