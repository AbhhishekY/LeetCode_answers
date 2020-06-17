448. Find All Numbers Disappeared in an Array
https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/


class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res;
        
        for(int i = 0; i < nums.size(); i++) {
            cout<<nums[i]<<" ";
            int x = abs(nums[i]);
            x--;
            if(nums[x] >= 0){
            nums[x] *= -1;
            }
          
            //cout<<nums[i]<<" "<<nums[x]<<endl;
        }
         cout<<endl;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > 0){
                res.push_back(i+1);
            }
        }
        
     
        return res;
        
    }
};
