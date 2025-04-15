#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin >> x;

    vector<int> div;

    for(int i = 1; i * i <= x; i++){
        if(x % i == 0){
            div.push_back(i);
            if(i != x / i) div.push_back(x / i);
        }
    }

    sort(div.begin(), div.end());

    for(int i = 0; i < div.size(); i++){
        cout << div[i] << " ";
    }
    cout << endl;

    return 0;
}