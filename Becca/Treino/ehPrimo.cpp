#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n = 0;

    cin >> n;

    if (n < 2)
    {
        cout << "Nao eh primo" << endl;
        return 0;
    }
    else {
        for (long long i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                cout << "Nao eh primo" << endl;
                return 0;
            }
        }
        cout << "Eh primo" << endl;
        return 0;
    }

    return 0;
}
