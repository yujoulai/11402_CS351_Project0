# Software Design Specification (SDS)

## 1. Overview
This project provides two different approaches to solve the Two Sum problem:
- TwoSumArray
- TwoSumHashTable

Each method returns the indices of two elements whose sum equals the target.

---

## 2. Function Design

### 2.1 TwoSumArray

#### Description
This method uses a brute-force approach by checking all possible pairs.

#### Algorithm
1. Iterate through the array with index i
2. For each i, iterate through the remaining elements with index j
3. Check if nums[i] + nums[j] equals the target
4. If matched, return {i, j}

#### Time Complexity
- O(n²)

#### Space Complexity
- O(1)

---

### 2.2 TwoSumHashTable

#### Description
This method uses a hash table to store visited values for faster lookup.

#### Algorithm
1. Initialize an empty hash table
2. Iterate through the array with index i
3. Compute complement = target - nums[i]
4. Check if complement exists in the hash table
5. If found, return {index_of_complement, i}
6. Otherwise, store nums[i] in the hash table

#### Time Complexity
- O(n)

#### Space Complexity
- O(n)

---

## 3. Data Structures

- `std::vector<int>` for input and output
- `std::unordered_map<int, int>` for hash table implementation

---

## 4. Design Considerations

- Ensure that the same element is not used twice
- Return the first valid pair found
- Assume that there is exactly one valid solution