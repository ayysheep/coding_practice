class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        sum=0
        left=0
        right=0
        minlen=float('inf')
        
        while right<len(nums):
            sum+=nums[right]
            while sum>=target:
                minlen=min(minlen,right-left+1)
                sum-=nums[left]
                left+=1
            right+=1
        if minlen==float('inf'):
            return 0
        else:
            return minlen