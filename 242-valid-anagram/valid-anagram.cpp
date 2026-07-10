class Solution {
public:
    bool isAnagram(string s, string t) {
        //O(nlogn)

        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // return s == t;

        unordered_map<char,int> m1;

        for(int i=0;i<s.size();i++){
            if(m1.find(s[i]) == m1.end()){
                m1.insert({s[i],1});
            }else{
                m1[s[i]]++;
            }
        }

         for(int j=0;j<t.size();j++){
            if(m1.find(t[j]) == m1.end()){
                return false;
            }else{
                m1[t[j]]--;
            }
        }

        for(auto it : m1){
            if(it.second != 0){
                return false;
            }
        }

        return true;
    }
};