#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string simplifyPath(string path) {
        string newstring;
        newstring+='/';
        stack<char> st;
        for (int i = 1; i < path.length(); i++)
        {
            if (path[i]=='/')
            {
                if (path[i-1]!='/')
                {
                    newstring+='/';
                }
                
            }else{
                newstring+=path[i];
            }
        }
        if (newstring.back() == '/')
        {
            newstring.pop_back();
        }
        
        
        
    }
};
int main(){
    Solution sol;
    cout<<sol.simplifyPath("/home//foo/");
}