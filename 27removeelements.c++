#include <bits/stdc++.h>

using namespace std;
void printv(vector<int> v){
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout<<endl;
}
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ans=0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i]==val)
            {
                nums.erase(nums.begin()+i);
                i--;
                printv(nums);
            }
            
            
        }
        return nums.size();
    }
};

int main(){
    Solution test;
    vector<int> nums={0,1,2,2,3,0,4,2};
    int ans=test.removeElement(nums,3);
    cout<<ans<<endl;
    // printv(nums);
    
}