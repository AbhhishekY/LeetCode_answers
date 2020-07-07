https://leetcode.com/problems/find-all-anagrams-in-a-string/

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = p.size();
        int i;
        vector<int> res;
        
        if(s.size() == 0 || p.size() == 0) return res;
        if(p.size() > s.size()) return res;
        
        vector<int> f1(26,0);
        vector<int> f2(26,0);
        
        for(i = 0; i < n; i++) {
            f1[p[i] - 'a']++;
            f2[s[i] - 'a']++;
        }
        if(f1 == f2) res.push_back(0);
        for(; i < s.size(); i++) {
            f2[s[i-n] - 'a']--;
            f2[s[i] - 'a']++;
            if(f1 == f2) res.push_back(i-n + 1);
        }
        return res;
    }
};
