
https://leetcode.com/problems/last-stone-weight/submissions/

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q;
        for(auto i : stones) {
            q.push(i);
        }
        while(!q.empty()) {
            if(q.size() == 1) return q.top();
            
            int a = q.top();
            q.pop();
            int b = q.top();
            q.pop();
            if(a != b) {
                q.push(abs(a-b));
            }
        }
    
    return 0;    
    }
};
