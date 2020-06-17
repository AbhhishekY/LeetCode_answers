20. Valid Parentheses
https://leetcode.com/problems/valid-parentheses/


class Solution {
public:
    bool isValid(string s) {
        stack<char> x;
        x.push('1');
    
        map<char,char> mp;
        mp['('] = ')';
        mp['['] = ']';
        mp['{'] = '}';
        
        for(auto i : s){
            char a = x.top();
            if(mp[a] == i){
                x.pop();
            }else{
                x.push(i);
            }
            
        }
        return x.top() == '1' ? true : false ;
    }
};
