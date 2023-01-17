#include <iostream>
#include <algorithm>
#include <string>
int main()
{
    using namespace std;
    string szyfr,klucz,slowo,a;
    int b,j = 0;
    cin >> szyfr;
    cin >> klucz;
    cin >> slowo;
    transform(szyfr.begin(), szyfr.end(), szyfr.begin(), ::toupper);
    transform(klucz.begin(), klucz.end(), klucz.begin(), ::toupper);
    transform(slowo.begin(), slowo.end(), slowo.begin(), ::toupper);
    if (szyfr == "SZYFRUJ")
    {
        for (int i = 0; i < slowo.length(); ++i)
        {
            if (j == klucz.length())
                j = 0;
            for (j; j < klucz.length(); ++j)
            {
                b = klucz[j] - 48;
                a += slowo[i] + b;
                break;
            }
            j++;
        }
    }
    if (szyfr == "DESZYFRUJ")
    {
        for (int i = 0; i < slowo.length(); ++i)
        {
            if (j == klucz.length())
                j = 0;
            for (j; j < klucz.length(); ++j)
            {
                b = klucz[j] - 48;
                a += slowo[i] - b;
                break;
            }
            j++;
        }
    }
    cout << a;
}