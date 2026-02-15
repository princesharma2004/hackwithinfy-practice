# Aggressive Cows

Place k cows in given stalls so the minimum distance between any two cows is maximized.

## Problem
Given an array `stalls[]` (unique positions) and integer `k`, choose `k` stalls such that the minimum pairwise distance between chosen stalls is as large as possible.

## Examples
```text
Input:  stalls = [1,2,4,8,9], k = 3
Output: 3

Input:  stalls = [10,1,2,7,5], k = 3
Output: 4

Input:  stalls = [2,12,11,3,26,7], k = 5
Output: 1
```

## Constraints
- 2 ≤ stalls.size() ≤ 10^6
- 0 ≤ stalls[i] ≤ 10^8
- 2 ≤ k ≤ stalls.size()

## Approach (optimal)
1. Sort `stalls`.
2. Binary-search the answer `D` (minimum allowed distance).
3. Use a greedy check to see if you can place `k` cows with at least `D` between them.

### Pseudocode
```cpp
sort(stalls.begin(), stalls.end());
int lo = 1, hi = stalls.back() - stalls.front(), ans = 0;
while (lo <= hi) {
  int mid = lo + (hi - lo) / 2;
  if (canPlace(stalls, k, mid)) { ans = mid; lo = mid + 1; }
  else hi = mid - 1;
}
return ans;
```

### Greedy check (core)
```cpp
// O(n) feasibility check
bool canPlace(const vector<int>& stalls, int k, int minDist);
```

## Complexity
- Time: O(n log D) where D = max(stalls) - min(stalls)
- Space: O(1) extra

## Tips / Edge-cases
- Use `const vector<int>&` for `stalls` in helper functions.
- Consider `long long` if coordinates/ differences can overflow `int`.
- Test with k = 2, k = n, and extreme coordinate gaps.

---

Good candidate for a coding interview — clear, standard pattern (binary search on answer + greedy). 🚀