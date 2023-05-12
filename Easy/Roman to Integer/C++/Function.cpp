class Solution {
public:
    static int romanNumeralToInt(char r){
        if(r=='I')
            return 1;
        if(r=='V')
            return 5;
        if(r=='X')
            return 10;
        if(r=='L')
            return 50;
        if(r=='C')
            return 100;
        if(r=='D')
            return 500;
        if(r=='M')
            return 1000;
        return -1;
    }


    int romanToInt(string s) {
        // std::unordered_map <char,int> map{{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int result = 0;

        for(int i = 0; i < s.size(); i++) {
            if(romanNumeralToInt(s[i]) < romanNumeralToInt(s[i+1])) {
                result = result - romanNumeralToInt(s[i]);
            } else {
                result += romanNumeralToInt(s[i]);
            }
            
        }
        return result;
    }
};