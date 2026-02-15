## Maximum Score After Removing Elements — Review & Solution

✅ Summary

- **Problem:** Given an array `nums`, repeatedly pick two positive entries, decrement both by 1, and gain 1 point per operation. Return the maximum points.
- **Time taken:** 30 minutes
- **Outcome:** Implementation used a max-heap simulation; a short mathematical solution exists and is preferable.

---

### Key insight

Let `S = sum(nums)` and `M = max(nums)`.

- Each operation removes 2 from the total sum ⇒ operations ≤ floor(S / 2).
- The largest element can be paired at most with all other elements ⇒ operations ≤ S - M.

Final answer (tight):

`answer = min(S/2, S - M)`

No heap, no simulation — just sum + max.

---

### Why the heap simulation is problematic

- Overcomplicated and slower (O(n log n)).
- Can be logically fragile for skewed inputs (e.g. `nums = [100,1,1]`).
- The invariant-based formula is O(n) and correct for all cases.

---

### Example

- `nums = [100, 1, 1]` → `S = 102`, `M = 100` → `answer = min(51, 2) = 2`.

---

### Edge cases

- Single element → `0`.
- All equal → `floor(S/2)`.
- One dominant element → `S - M`.

---

### Complexity

- Time: **O(n)** (one pass to compute sum and max)
- Space: **O(1)**

---

### Recommendation

- Prefer deriving invariants (bounds) over simulation.
- Practice problems that require sum/max invariants to improve "math + invariant" skills.

---

### HackWithInfy readiness (short)

- Binary Search: **Strong**
- Standard Greedy: **Strong**
- Math & Invariants: **Medium** — target this area to raise your score to ~90%.

