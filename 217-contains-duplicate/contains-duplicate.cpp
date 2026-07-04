class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> t(nums.begin(),nums.end());
        return (t.size() == nums.size())? false : true ; 
    }
};