# Test Plan

## 1. Objective
Verify that both implementations (TwoSumArray and TwoSumHashTable) correctly return the indices of two numbers whose sum equals the target.

---

## 2. Scope
This test plan covers:
- functional correctness of both methods
- different input scenarios including edge cases

---

## 3. Test Cases

### TC1: Basic valid case
- Input: nums = [2, 7, 11, 15], target = 9
- Expected Output: [0, 1]

---

### TC2: Negative numbers
- Input: nums = [-1, -2, -3, -4, -5], target = -8
- Expected Output: [2, 4]

---

### TC3: Duplicate values
- Input: nums = [3, 3], target = 6
- Expected Output: [0, 1]

---

### TC4: Zero included
- Input: nums = [0, 4, 3, 0], target = 0
- Expected Output: [0, 3]

---

### TC5: Small input size
- Input: nums = [1, 2], target = 3
- Expected Output: [0, 1]

---

## 4. Test Method

- Compile the program using a C++20 compiler
- Execute the program with predefined inputs
- Compare the output indices with expected results

---

## 5. Success Criteria

The system passes the test if:
- both implementations return correct indices for all test cases
- no runtime errors occur