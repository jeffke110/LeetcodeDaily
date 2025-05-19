#include <iostream>
#include <vector>
#include <unordered_map>


class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> numMap;
        int i = 0;
        for(const int num : nums){
            int complement = target - num;
            if(numMap.find(complement) != numMap.end()){
                return { i, numMap[complement]};
            }
        
            numMap[num] = i;
            i++;
        }
        return {};
    }
};