class Solution {
public:
    string convert(string s, int nr) {
        if(nr <= 1){
            return s;
        }
        vector<string> v(nr,"");
        int j = 0, dir = -1;
        string a;

        for(int i=0;i<s.length();i++){
            if(j == nr-1 || j == 0) dir*= -1;

            v[j] += s[i];
            if(dir == 1){
                j++;
            }else{
                j--;
            }
        }
        for(int i=0;i<v.size();i++){
            a += v[i];
        }
        return a;
    }
};