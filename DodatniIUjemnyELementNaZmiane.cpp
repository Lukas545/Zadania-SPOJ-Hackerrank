#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void rotate(vector<int>&vec){
    int temp;
    sort(vec.begin(), vec.end());
    for(int i = 0; i<vec.size(); ++i){
        if(vec[i]<0)
            cout<<vec[i]<<" "<<vec.size()-1<<" ";
    }
    
}
int main() {
	int t,n,k;
	vector<int>vec;
	cin>>t;
	while(t-->0){
	    cin>>n;
	    for(int i  =0; i<n; ++i)
	    {
	        cin>>k;
	        vec.push_back(k);
	    }
	    rotate(vec);
	    vec.clear();
	    
	}
	return 0;
}