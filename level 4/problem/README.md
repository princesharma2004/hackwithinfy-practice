## Maximum Score After Removing Elements

### Problem
Given an integer array `nums`. In one operation you choose two distinct indices `i` and `j` with `nums[i] > 0` and `nums[j] > 0`, decrement both by 1, and gain 1 point. Return the maximum points possible.

### Constraints
- `1 <= n <= 2 * 10^5`
- `1 <= nums[i] <= 10^9`

### Examples
- `nums = [1, 4, 2]` → **3**
- `nums = [5, 5, 5]` → **7**
- `nums = [10]` → **0**

### Solution (O(n))
Let `S = sum(nums)` and `M = max(nums)`. The answer is:

`answer = min(S/2, S - M)`

Proof sketch: every operation removes 2 from the total sum (so ≤ `S/2`), and the largest element cannot be paired more than the sum of the remaining elements (so ≤ `S - M`). The minimum of these bounds is tight.

### Implementation (C++)
```cpp
long long maxScore(const vector<int>& a) {
    long long S = 0, M = 0;
    for (long long x : a) { S += x; M = max(M, x); }
    return min(S/2, S - M);
}
```

### Complexity
- Time: `O(n)`
- Space: `O(1)`

### Tip
Use 64-bit integers for the sum (`long long`).
