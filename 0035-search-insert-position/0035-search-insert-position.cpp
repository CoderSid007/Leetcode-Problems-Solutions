class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int res=0;
        for(int i = 0 ; i< nums.size() ; i++){
            if(nums[i] < target) 
            res++;
        }
        return res;
        
    }
};