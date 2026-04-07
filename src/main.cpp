#include <iostream>
#include <vector>
using namespace std;

vector<int> TwoSumArray(vector<int>& nums, int target);
vector<int> TwoSumHashTable(vector<int>& nums, int target);

void printResult(string name, vector<int> result) {
    cout << name << ": ";
    if (result.size() == 2) {
        cout << result[0] << ", " << result[1];
    } else {
        cout << "No result";
    }
    cout << endl;
}

int main() {

    // TC1: Basic
    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;

    // TC2: Negative
    vector<int> nums2 = {-1, -2, -3, -4, -5};
    int target2 = -8;

    // TC3: Duplicate
    vector<int> nums3 = {3, 3};
    int target3 = 6;

    // TC4: Zero
    vector<int> nums4 = {0, 4, 3, 0};
    int target4 = 0;

    // TC5: Small
    vector<int> nums5 = {1, 2};
    int target5 = 3;

    cout << "=== TwoSumArray ===" << endl;
    printResult("TC1", TwoSumArray(nums1, target1));
    printResult("TC2", TwoSumArray(nums2, target2));
    printResult("TC3", TwoSumArray(nums3, target3));
    printResult("TC4", TwoSumArray(nums4, target4));
    printResult("TC5", TwoSumArray(nums5, target5));

    cout << "\n=== TwoSumHashTable ===" << endl;
    printResult("TC1", TwoSumHashTable(nums1, target1));
    printResult("TC2", TwoSumHashTable(nums2, target2));
    printResult("TC3", TwoSumHashTable(nums3, target3));
    printResult("TC4", TwoSumHashTable(nums4, target4));
    printResult("TC5", TwoSumHashTable(nums5, target5));

    return 0;
}