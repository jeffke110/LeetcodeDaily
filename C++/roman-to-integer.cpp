#include <iostream>
#include <unordered_map>


class Solution {
    private:
        std::unordered_map<char, int> romanMap = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };
    public:
    
        int romanToInt(std::string s) {
            int sSize = s.size();
            int sum = 0;

            for (int i = 0; i < s.size(); ++i) {
                int curr = romanMap[s[i]];
                int next = (i + 1 < s.size()) ? romanMap[s[i + 1]] : 0;
        
                if (curr < next) {
                    sum -= curr; // subtract in case of a subtractive pair
                } else {
                    sum += curr;
                }
            }
        
            return sum;
        }
    };