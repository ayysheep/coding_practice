class Solution:
    def isPalindrome(self, s: str) -> bool:
        filtered=filter(lambda char:char.isalnum(),s.lower())
        new_filtered=list(filtered)
        reverse=new_filtered[::-1]
        return new_filtered==reverse
