//https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/727/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        nums.erase((unique(nums.begin(), nums.end())), nums.end());
        return nums.size();
    }
};
