class Solution {
public:
    bool isPalindrome(int x) {
        string s = std::to_string(x);
        string r = s;
        std::reverse(s.begin(), s.end());
        return s == r;
    }
};