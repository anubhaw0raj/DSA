class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        vector<int> t;
        for(int i=0;i<nums.size();i++){
            if(nums[i] != val){
                t.push_back(nums[i]);
                nums[k] = nums[i];
                k++;
            }
        }

        // for(int i=0;i<t.size();i++){
        //     nums[i] = t[i];
        // }
        return k;
    }
};