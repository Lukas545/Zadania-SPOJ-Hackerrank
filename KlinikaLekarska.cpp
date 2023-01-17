
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    int waitingTime(int N, int X){
        std::cout<<N<<"\n";
        int t = N-1*10;
        std::cout<<N<<"\n";
        int p = N-1*X;
        
        return t-p;
    }
};


int main(){
    int t;
    cin >> t;
    while(t--){
        int N, X;
        cin>>N>>X;
        
        Solution ob;
        cout<<ob.waitingTime(N, X)<<"\n";
    }
    return 0;
}