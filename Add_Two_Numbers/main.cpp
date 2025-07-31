#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap; // Map to store number and its index
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (numMap.find(complement) != numMap.end()) {
                return { numMap[complement], i }; // Found the pair
            }
            numMap[nums[i]] = i; // Store current number with its index
        }
        return {}; // No solution found (the problem guarantees one exists)
    }
};

// Test the solution
int main() {
    Solution solution;

    // Example 1
    vector<int> nums1 = { 2, 7, 11, 15 };
    int target1 = 9;
    vector<int> result1 = solution.twoSum(nums1, target1);
    cout << "Output: [" << result1[0] << ", " << result1[1] << "]" << endl;

    // Example 2
    vector<int> nums2 = { 3, 2, 4 };
    int target2 = 6;
    vector<int> result2 = solution.twoSum(nums2, target2);
    cout << "Output: [" << result2[0] << ", " << result2[1] << "]" << endl;

    // Example 3
    vector<int> nums3 = { 3, 3 };
    int target3 = 6;
    vector<int> result3 = solution.twoSum(nums3, target3);
    cout << "Output: [" << result3[0] << ", " << result3[1] << "]" << endl;

    return 0;
}
