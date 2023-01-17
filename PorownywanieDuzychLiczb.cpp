#include <iostream>
using namespace std;
bool rowne(int l1, int l2);
bool wiekszeRowne(int l1, int l2);
bool mniejszeRowne(int l1, int l2);
bool nierowne(int l1, int l2);
int main() {
    string a;
    long double  l1, l2;
    for (int i = 0; i<10; ++i)
    {
        cin>>l1>>a>>l2;
        if (a=="==")
        {
            if (rowne(l1, l2)) {
                cout<<"1"<<endl;
            }            
else {
                cout<<"0"<<endl;
            }
        }
        if (a=="!=") {
            if (nierowne(l1, l2))
                cout<<"1"<<endl;
            else
                cout<<"0"<<endl;

        }
        if (a=="<=") {
            if (mniejszeRowne(l1, l2)) {
                cout<<"1"<<endl;

            }
            else {
                cout<<"0"<<endl;
            }
        }
        if (a==">=") {
            if (wiekszeRowne(l1, l2)) {
                cout<<"1"<<endl;
            }            
else {
                cout<<"0"<<endl;
            }
        }
        cout<<endl;
    }
}
bool rowne(int l1, int l2) {
    if (l1==l2) return true;
    else return false;
}
bool mniejszeRowne(int l1, int l2) {
    if (l1<=l2) return true;
    else return false;
}
bool wiekszeRowne(int l1, int l2) {
    if (l1>=l2) return true;
    else return false;
}
bool nierowne(int l1, int l2)
{
    if(l1!=l2) return true;
    else return false;
}