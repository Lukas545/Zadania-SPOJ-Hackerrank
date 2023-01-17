#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

 class Solution{
	public:
   	int  minimum_difference(vector<int>vec){
   	    sort(vec.begin(), vec.end());
   	    int minsum = 0;
   	    int temp=vec[1]-vec[0];
   	    for(int i = 2; i<vec.size(); ++i){
   	        minsum = vec[i]-vec[i-1];
   	        if(minsum<temp)
   	            temp=minsum;
   	        
   	    }
   	    return temp;
   	    
   	}    
};
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < nums.size(); i++)cin >> nums[i];
		Solution ob;
		int ans = ob.minimum_difference(nums);
		cout << ans <<"\n";
	}  
	return 0;
}