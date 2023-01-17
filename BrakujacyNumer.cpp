#include <iostream>
#include <vector>
using namespace std;
void find(vector<int>&vec){
    int sum_e = (vec.size()+1)*vec.size()/2;
    int sum_a = 0;
    for(int i= 0; i<vec.size(); ++i)
        sum_a+=vec[i];
    cout<<abs(sum_e-sum_a)<<"\n";
}
int main() {
	int t,n,k;
	vector<int>vec;
	cin>>t;
	while(t--){
	    cin>>n;
	    for(int i = 0;i<n-1; ++i)
	  {
	      cin>>k;
	      vec.push_back(k);
	  }
	  find(vec);
	  vec.clear();
	        
	}
	return 0;
}