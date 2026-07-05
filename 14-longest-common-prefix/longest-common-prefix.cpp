class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        if(strs.size() == 1) return strs[0];
        string ans = "";
        int cmin = INT_MAX;
        for(int i=0;i<strs.size()-1;i++){
            if(cmin == 0){
                break;
            }
            int csiz = 0;
            for(int j=0;j < min(cmin,(int)strs[i+1].size());j++){
                if(strs[i][j] == strs[i+1][j]){
                    csiz++;
                }else{
                    break;
                }
            }
            cmin  =  min(csiz,cmin);
        }
        for(int i=0;i<cmin;i++){
            ans.push_back(strs[0][i]);
        }
        return ans;
    
    }
};