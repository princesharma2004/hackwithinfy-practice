# Minimum Time to Complete Trips — Review & Notes

## Summary
- Correct approach: binary-search the minimum time T and use a greedy check that sums floor(T / time[i]). ✅
- Tight upper bound: use `min(time) * totalTrips` (faster bus doing all trips). Guard this multiplication against overflow. 

---

## Correctness & key points
- Binary-search invariant: find the smallest T such that total completed trips >= `totalTrips`.
- Feasibility check (O(n)): accumulate `trips += T / time[i]` and early-exit when `trips >= totalTrips` (prevents unnecessary work and overflow).
- Use 64-bit for counters; use 128-bit or cap when computing `min(time) * totalTrips` to avoid overflow.

### Safe upper-bound construction (recommended)
```cpp
long long minT = *min_element(time.begin(), time.end());
__int128 maxPossible = (__int128)minT * totalTrips;
long long hi = (maxPossible > LLONG_MAX) ? LLONG_MAX : (long long)maxPossible;
```

---

## Typical implementation sketch
```cpp
// binary-search lower-bound + greedy check
long long lo = 1, hi = /* safe cap as above */;
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
```

---

## Complexity
- Time: O(n log Answer) where Answer ≈ min(time) * totalTrips (binary-search range)
- Space: O(1)

---

## Recommendations
- Add unit tests for very large `totalTrips` to verify overflow handling.  
- Prefer early-exit in the feasibility loop.  
- Keep `long long` for counters and use `__int128` only when computing bounds.

---

## Short verdict
Correct and clean solution; tighten the upper bound and add overflow guards for production safety. 🎯
