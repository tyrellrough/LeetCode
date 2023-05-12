class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result="";
        int n=strs.size(),i,j;
        string res=strs[0];
        for(int i=0;i<res.size();i++){
            for(int j=1;j<n;j++){
                if(strs[j][i]!=res[i]){
                    return result;
                }
            }
            result+=res[i];
        }
        return result;
    }
};