# Problem 3: Allocate Minimum Number of Pages

## Description
You are given an integer array `pages` where `pages[i]` represents the number of pages in the $i^{th}$ book.
You are also given an integer `k` representing the number of students.

Allocate books such that:
1. Each student gets at least one book.
2. Each student gets contiguous books.
3. The maximum number of pages assigned to any student is minimized.

Return the minimum possible maximum number of pages.  
If allocation is not possible, return `-1`.

## Constraints
- $1 \le pages.length \le 10^5$
- $1 \le pages[i] \le 10^6$
- $1 \le k \le 10^5$

## Input / Output
- **Input:** 
  - An integer array `pages`
  - An integer `k`
- **Output:** An integer.

## Examples

### Example 1
**Input:** `pages = [12, 34, 67, 90], k = 2`  
**Output:** `113`  
**Explanation:**
- Student 1 gets `[12, 34, 67]` -> total = `113`
- Student 2 gets `[90]` -> total = `90`
- Maximum = `113`, which is the minimum possible.

### Example 2
**Input:** `pages = [10, 20, 30, 40], k = 2`  
**Output:** `60`

---

## Metrics
| Metric | Value |
| :--- | :--- |
| **Expected Time Complexity** | $O(N \log(\text{sum of pages}))$ |
| **Target Time** | 60 minutes |
| **Actual Time** | 45:30 minutes |