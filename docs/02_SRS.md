# Software Requirements Specification (SRS)

## 1. Overview
This project implements the Two Sum problem in C++20.

The system provides two different approaches to solve the problem:
- TwoSumArray (array-based approach)
- TwoSumHashTable (hash-table-based approach)

---

## 2. Input
- `nums`: a vector of integers (`std::vector<int>`)
- `target`: an integer value

---

## 3. Output
- A vector of integers containing the indices of two elements such that:
  
  nums[i] + nums[j] = target

---

## 4. Functional Requirements

### FR1: Array-based solution
The system shall provide a function `TwoSumArray` that:
- iterates through all possible pairs,
- returns the indices of two elements whose sum equals the target.

### FR2: Hash-table-based solution
The system shall provide a function `TwoSumHashTable` that:
- uses a hash table to store visited values,
- returns the indices of two elements whose sum equals the target.

### FR3: Correct result
The system shall:
- return exactly two indices,
- ensure the indices correspond to different elements.

---

## 5. Constraints

- The same element cannot be used twice.
- Each input is assumed to have exactly one valid solution.
- The implementation language must be C++20.
- The input and output must use `std::vector<int>`.

---

## 6. Non-functional Requirements

- The program should be able to compile successfully using a standard C++20 compiler.
- The system should support automated testing via GitHub Actions.
- The system should be executable inside a Docker container.