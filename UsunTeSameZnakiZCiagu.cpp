#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    string removeChars(string string1, string string2)
    {
        string v;
        int l = 0;
        for (int i = 0; i < string1.size(); ++i)
        {
            for (int j = 0; j < string2.size(); ++j)
            {
                if (string1[i] == string2[j])
                {
                    l++; 
                    break;
                }
               
                
            }
            if(l==0)
                v+=string1[i];
            l=0;
        }
        return v;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string string1, string2;
        cin >> string1;
        cin >> string2;
        Solution ob;
        cout << ob.removeChars(string1, string2) << endl;
    }
    return 0;
}