class Solution {
public:
    vector<string> fizzBuzz(int n) {
        std::vector<std::string> answer(n,"");

        for(int i = 1; i <= n; i++) {
            bool isDivisibleBy3 = (i % 3 == 0);
            bool isDivisibleBy5 = (i % 5 == 0);
            if(isDivisibleBy3 && isDivisibleBy5) {
                answer[i-1] = ("FizzBuzz");
            } else if(isDivisibleBy5) {
                answer[i-1] = ("Buzz");
            } else if(isDivisibleBy3) {
                answer[i-1] = ("Fizz");
            } else {
                answer[i-1] = to_string(i);
            }

        }
        return answer;
    }
};