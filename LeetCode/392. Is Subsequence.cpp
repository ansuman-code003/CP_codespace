class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0;
        for(int i=0;i<(int)t.size();i++){
            char tomatch=s[j];
            if(t[i] == tomatch){
                j++;
            }else continue;
        }
        if(j==(int)s.size()) return true;
        return false;
    }
};
