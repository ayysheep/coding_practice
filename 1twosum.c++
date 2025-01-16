#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int position1,position2;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i+1; j < nums.size() ; j++)
            {
                if (nums[i]+nums[j]==target)
                {
                    position1=i,position2=j;
                }
                
            }
            
        }
        ans.push_back(position1);
        ans.push_back(position2);
        return ans;
    }
};
int main(){
    vector<int> num={2,7,11,15};
    Solution func;
    vector<int> ans=func.twoSum(num,9);
    for(int i :ans){
        cout<<i<<"";
    }

}