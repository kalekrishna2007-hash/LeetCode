#include <iostream>
#include <vector>
#include <algorithm> // Required for sort

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Create a vector of pairs: {number, original_index}
        vector<pair<int, int>> valueWithIndex;
        for (int i = 0; i < nums.size(); i++) {
            valueWithIndex.push_back({nums[i], i});
        }
        sort(valueWithIndex.begin(), valueWithIndex.end());

        int st = 0;
        int end = nums.size() - 1;

        while (st < end) {
            int currsum = valueWithIndex[st].first + valueWithIndex[end].first;

            if (currsum == target) {
                return {valueWithIndex[st].second, valueWithIndex[end].second};
            }
            else if (currsum > target) {
                end--;
            }
            else {
                st++;
            }
        }
        return {}; // Return empty vector if no solution found
    }
};