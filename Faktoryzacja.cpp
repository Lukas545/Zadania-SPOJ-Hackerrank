#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
typedef long long ll;
typedef vector<int> VInt;
VInt Faktoryzacja(int p);

int main()
{
    int l = 1, k = 0, v;
    ll p;
    VInt vec;
    do
    {
        cout << "Podaj liczbe: ";
        cin >> p;
    } while (p < 2);
    vec = Faktoryzacja(p);
    for (int i = 1; i < vec.size(); ++i)
    {
        if (vec[i] == vec[i - 1])
        {
            l++;
        }
        else
        {
            if (k < l)
            {
                k = l;
                v = vec[i - 1];
                l=1;
            }
        }
    }

    if (k == 1)
    {
        int i = vec.size() - 1;
        v = vec[i];
    }
    cout << "\nWynik: " << v;
}
VInt Faktoryzacja(int p)
{
    VInt vec;
    while (p % 2 == 0)
    {
        vec.push_back(2);
        p = p / 2;
    }

    for (int i = 3; i <= sqrt(p); i = i + 2)
    {
        while (p % i == 0)
        {
            vec.push_back(i);
            p = p / i;
        }
    }
    if (p > 2)
        vec.push_back(p);
    return vec;
}