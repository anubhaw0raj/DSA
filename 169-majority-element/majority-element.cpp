class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // O(n) & O(n)
        unordered_map<int,int> m;
        int maxc = 0; int res = 0;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
            if(m[nums[i]] > maxc){
                maxc = m[nums[i]];
                res = nums[i];
            }
        }

        return res;

        //boyer-moore voting O(n) & O(1)
        // int res = 0,count = 0;

        // for(int num : nums){
        //     if(count  == 0){
        //         res = num;
        //     }
        //     count += (num == res) ? 1 : -1;
        // }
        // return res;
    }
};