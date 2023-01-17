#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
    int t, d;
    long int a, b;
 
    cin >> t;
 
    for(int i = 0 ; i < t ; i++)
    {
            cin.clear();
            cin.sync();
 
            cin >> a >> b;
            if(a==10)   d = 0;
            else     a = a%10;
            switch(a)
            {
                      case 0:
                           {
                                d = 1;
                                break;
                           }
                      case 1:
                           {
                                d = 1;
                                break;
                           }
                      case 2:
                           {
                                if(b%4==1)  d = 2;
                                if(b%4==2)  d = 4;
                                if(b%4==3)  d = 8;
                                if(b%4==0)  d = 6;
                                break;
                           }
                      case 3:
                           {
                                if(b%4==1)  d = 3;
                                if(b%4==2)  d = 9;
                                if(b%4==3)  d = 7;
                                if(b%4==0)  d = 1;
                                break;
                           }
                      case 4:
                           {
                                if(b%4==1 || b%4==3)  d = 4;
                                if(b%4==2 || b%4==0)  d = 6;
                                break;
                           }
                      case 5:
                           {
                                d = 5;
                                break;
                           }
                      case 6:
                           {
                                d = 6;
                                break;
                           }
                      case 7:
                           {
                                if(b%4==1)  d = 7;
                                if(b%4==2)  d = 9;
                                if(b%4==3)  d = 3;
                                if(b%4==0)  d = 1;
                                break;
                           }
                      case 8:
                           {
                                if(b%4==1)  d = 8;
                                if(b%4==2)  d = 4;
                                if(b%4==3)  d = 2;
                                if(b%4==0)  d = 6;
                                break;
                           }
                      case 9:
                           {
                                if(b%4==1 || b%4==3)  d = 9;
                                if(b%4==2 || b%4==0)  d = 1;
                                break;
                           }
            }
 
            if(b==0)    d = 1;
            if(a==0) d=0;
            cout << d << endl;
    }
    return 0;
}