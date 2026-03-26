#include <vector>
#include <unordered_map>
using namespace std;

vector<int> TwoSumArray(vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                return {i, j};
            }
        }
    }
    return {};
}

vector<int> TwoSumHashTable(vector<int>& nums, int target) {
    unordered_map<int, int> table;

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];

        if (table.find(complement) != table.end()) {
            return {table[complement], i};
        }

        table[nums[i]] = i;
    }

    return {};
}