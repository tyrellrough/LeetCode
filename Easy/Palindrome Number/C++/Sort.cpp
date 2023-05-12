class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        std::sort(strs.begin(), strs.end());
            for (int j = 0; j < strs.size(); j++) {
                std::cout << strs[j] << std::endl;

             }
        int n = strs.size();
        std::string first = strs[0];
        std::string last = strs[n - 1];
        int smallest = 0;
        if (first.length() <= last.length()) {
            smallest = first.length();
        }
        else {
            smallest = last.length();
        }
        std::string ans = "";
        //std::cout << smallest << std::endl;
        for (int i = 0; i < smallest; i++) {
            if (first[i] == last[i]) {
                ans += first[i];  
                std::cout << first[i];
            }  else {
                break;
            }  
        }

        return ans;
    }
};