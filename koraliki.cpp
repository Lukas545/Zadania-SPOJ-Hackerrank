#include <iostream>
#include <string>
void kolory(int n, std::string &sznurek);
int main()
{
    using namespace std;
    int n;
    string sznurek;
    cout<<"Podaj liczbe n: ";
    cin>>n;
    kolory(n,sznurek);
    for (int i = sznurek.size() - 1; i >= 0; i--)
    {
        cout << sznurek[i];
    }
}
void kolory(int n, std::string & sznurek)
{
    if(n==0)
        return;
    else if(n%2==0)
        sznurek+='c';
    else
        sznurek+='b';
    n /= 2;
    kolory(n, sznurek);

}
