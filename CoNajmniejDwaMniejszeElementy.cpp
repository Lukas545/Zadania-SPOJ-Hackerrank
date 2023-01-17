// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

vector<int> findElements(int a[], int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        
        vector <int> res = findElements(a,n);
        
        for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
        cout<<endl;
    }
}// } Driver Code Ends




vector<int> findElements(int a[], int n)
{
    vector<int>v;
    for(int i = 0; i<n; ++i)
        v.push_back(a[i]);
    sort(v.begin(),v.end());
    v.pop_back();
    v.pop_back();
    return v;
    
}