#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0,left=0,right=0,len=INT_MAX;

        for (; right < nums.size(); right++)
        {
            
            sum+=nums[right];
            while (sum>=target)
            {
                len=min(len,right-left+1);
                sum-=nums[left];
                left++;
                
            }
            
            
           cout<<sum<<" left"<<left<<" right"<<right<<" len"<<len<<endl;
        
        }
        return len==INT_MAX?0:len;
    }
};
int main(){
    Solution s;
    vector<int> nums = {2,3,1,2,4,3};
    cout<<s.minSubArrayLen(7,nums);
    return 0;
}

