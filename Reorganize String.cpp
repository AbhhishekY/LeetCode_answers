767. Reorganize String
https://leetcode.com/problems/reorganize-string/

class Solution {
public:
    string reorganizeString(string S) {
        unordered_map<char,int> mp;
        for(auto i : S){
            mp[i]++;
        }
        priority_queue<pair<int,char>> p;
        for(auto i : mp) {
            p.push({i.second,i.first});
        }
        
        if(p.top().first > (S.size() + 1)/2) return "";
        int i = 0;
        
        while(!p.empty()) {
            int freq = p.top().first;
            char val = p.top().second;
            
            while(freq--){
                if( i >= S.size()) i = 1;
                S[i] = val;
                i += 2;
            }
            p.pop();
            
        }
        return S;
    }
};
