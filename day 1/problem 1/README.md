# Problem 1: Count Zero Sum Pairs

## Description
Given an integer array `nums`, return the number of pairs `(i, j)` such that:
- $0 \le i < j < \text{nums.length}$
- $\text{nums}[i] + \text{nums}[j] = 0$

## Constraints
- $1 \le \text{nums.length} \le 2 \times 10^5$
- $-10^9 \le \text{nums}[i] \le 10^9$

## Input / Output
- **Input:** An integer array `nums`.
- **Output:** An integer representing the number of valid pairs.

## Examples

### Example 1
**Input:** `nums = [1, -1, 2, -2, 3]`  
**Output:** `2`  
**Explanation:** Valid pairs are `(1, -1)` and `(2, -2)`.

### Example 2
**Input:** `nums = [0, 0, 0]`  
**Output:** `3`  
**Explanation:** Valid pairs are `(0, 1)`, `(0, 2)`, and `(1, 2)`.

---

## Metrics
| Metric | Value |
| :--- | :--- |
| **Expected Time Complexity** | $O(N)$ |
| **Target Time** | 25 minutes |
| **Actual Time** | 8:35.22 minutes |