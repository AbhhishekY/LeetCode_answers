1122. Relative Sort Array
https://leetcode.com/problems/relative-sort-array/

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> res;
        vector<int> ans;
        map <int,int> mp;
        for(auto i : arr1) {
            mp[i]++;
        }
        
        for(auto i : arr2) {
            while(mp[i] != 0){
                res.push_back(i);
                mp[i]--;
            }
            if(mp[i] == 0){
                mp.erase(i);
            }
        }
        for(auto i : mp) {
              while(i.second != 0){
                ans.push_back(i.first);
                i.second--;
            }
            if(i.second == 0){
                mp.erase(i.first);
            }
            
        }
        
        sort(ans.begin(),ans.end());
        vector<int> x(res);
        x.insert(x.end(), ans.begin(),ans.end());
        return x;
    }
};
