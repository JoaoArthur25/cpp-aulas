#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, q;
    cin >> n >> q;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < q; i++)
    {
        int target;
        cin >> target;
        bool achou = false;
        int l = 0, r = n - 1;

        while (l <= r)
        {
            int meio = (l + r) / 2;
            if (target == arr[meio])
            {
                achou = true;
                break;
            }
            else if (target > arr[meio])
            {
                l = meio + 1;
            }
            else
            {
                r = meio - 1;
            }
        }

        if (achou)
        {
            cout << "SIM" << endl;
        }
        else
        {
            cout << "NAO" << endl;
        }
    }

    return 0;
}