# Minimum Time to Complete Trips

## Problem
Given an array `time` where `time[i]` is the time taken by the i-th bus to complete one trip, and an integer `totalTrips`, return the **minimum time T** such that all buses together can complete at least `totalTrips` trips.

## Constraints
- 1 ≤ time.length ≤ 2×10^5
- 1 ≤ time[i] ≤ 10^7
- 1 ≤ totalTrips ≤ 10^14

> Use 64-bit (`long long`) for time and counters; watch multiplication overflow when computing bounds.

## Examples
```text
Input:  time = [1,2,3], totalTrips = 5
Output: 3

Input:  time = [2], totalTrips = 1
Output: 2
```

## Approach (optimal)
1. Binary-search the answer T (search domain: [1, high]).
2. Feasibility check: compute total trips possible in time T as sum(floor(T / time[i])).
3. If sum >= totalTrips, try smaller T; otherwise increase T.

### Choosing `high` safely
The tight theoretical upper bound is `min(time) * totalTrips` (fastest bus does all trips). Because this product can exceed 64-bit, compute it with `__int128` and cap to `LLONG_MAX`.

## Pseudocode / Reference C++
```cpp
long long minimumTime(vector<int>& time, long long totalTrips) {
    long long minT = *min_element(time.begin(), time.end());
    __int128 maxPossible = (__int128)minT * totalTrips;
    long long lo = 1, hi = (maxPossible > LLONG_MAX) ? LLONG_MAX : (long long)maxPossible;

    while (lo < hi) {
        long long mid = lo + (hi - lo) / 2;
        long long trips = 0;
        for (int t : time) {
            trips += mid / t;
            if (trips >= totalTrips) break; // early exit
        }
        if (trips >= totalTrips) hi = mid;
        else lo = mid + 1;
    }
    return lo;
}
```

## Complexity
- Time: O(n log Answer)
- Space: O(1)

## Edge-cases & tests
- `time` length = 1; `totalTrips` = 1 (smallest).  
- Very large `totalTrips` near 1e14 — verify no overflow in bound computation.  

---

This is a standard binary-search-on-answer pattern — good interview question for greedy + binary search. 🚀