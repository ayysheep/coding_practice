#include <bits/stdc++.h>
#include <cctype>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(char c:s){
            if (isalnum(c))
            {
                str+=tolower(c);
            }
        }
        int l=str.size()-1,i=0;
        do
        {
            if (str[l]!=str[i])
            {
                return false;
            }
            l--,i++;
            
        } while (l>=(str.size()/2));
        
        
        
        return true;
    }
};

int main(){
    Solution s;
    cout<<s.isPalindrome("race a car");
}