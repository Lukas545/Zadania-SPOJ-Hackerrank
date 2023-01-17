#include <iostream>
int main()
{
    using namespace std;
    int k;
    string a;
    string slowo;
    cin>>k;
    char *tab = new char[k];
    for(int i = 0; i<k; ++i)
        cin>>tab[i];
    cin>>slowo;
    for(int i = 0; i<10; ++i)
    {
        for(int j = 0; j<k; ++j)
        {
            if(slowo[i]==tab[j])
            {
                a+=slowo[i];
            }
        }
        a+=slowo[i];
    }
    cout<<a;
    delete [] tab;
}