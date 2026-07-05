class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i]) == m.end()){
                m.insert({nums[i],1});
            }else{
                m[nums[i]]++;
            }
        }

        vector<int> ans(k, 0);
        priority_queue<pair<int, int>> q;
        
        for (auto it: m) {
            q.push({it.second, it.first});
        }

        for (int j=0; j<k; j++) {
            pair<int, int> p = q.top();
            q.pop();
            ans[j] = p.second;
        }

        // vector<pair<int,int>> a;
        // for(auto it : m){
        //     a.push_back({it.second,it.first});
        // }

        // sort(a.begin(),a.end(),greater<pair<int,int>>());
        // vector<int> ans;

        // for(int j=0;j<k;j++){
        //     ans.push_back(a[j].second);
        // }
        return ans;
    }
};