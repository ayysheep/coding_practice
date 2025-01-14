#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        if (s[0]!='(' && s[0]!='[' && s[0]!='{')
        {
            return false;
        }
        stack<char> st;
        st.push('0');//'0'負責墊底
        for (char c:s)
        {
            if (c=='('||c=='['||c=='{')
            {
                st.push(c);
            }else
            {
                switch (c)
                {
                case ')':
                    if (st.top()!='(')
                    {
                        return false;
                    }else
                    {
                        st.pop();
                    }
                    break;
                //-------------------------------------
                case ']':
                    if (st.top()!='[')
                    {
                        return false;
                    }else
                    {
                        st.pop();
                    }
                    break;
                //----------------------------------
                case '}':
                    if (st.top()!='{')
                    {
                        return false;
                    }else
                    {
                        st.pop();
                    }
                    break;
                //--------------------------------
                default:
                    break;
                }
            }
        }
        if (st.size()==1)
        {
            return true;
        }else
        {
            return false;
        }
        
    }
};