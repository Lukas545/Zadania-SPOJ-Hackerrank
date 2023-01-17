#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> kLargest(int arr[], int n, int k)
{
      vector<int>vec;
      sort(arr, arr + n, greater<int>());
      for(int i = 0; i<k; ++i)
        vec.push_back(arr[i]);
     return vec;    
}


int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        for(int i = 0; i < n;i++)
            cin>>arr[i];
        
        vector<int> result = kLargest(arr, n, k);
        for (int i = 0; i < result.size(); ++i)
            cout<<result[i]<<" ";
        cout << endl;
        
    }
    return 0;
}
