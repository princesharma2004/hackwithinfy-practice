# Day 1 - Speed Analysis Report

## Section 1: Performance Summary

| Problem                      | Time Taken | Target Time | Status             |
| :--------------------------- | :--------- | :---------- | :----------------- |
| **Q1: Zero Sum Pairs** | 8:35       | 20–25 min  | 🚀 Ahead of Target |
| **Q2: Reduce String**  | 10:33      | 45 min      | 🚀 Ahead of Target |
| **Q3: Allocate Books** | 45:30      | 60–75 min  | ✅ Solid Progress  |

---

## Detailed Analysis

### Q1: Zero Sum Pairs

> [!CAUTION]
> **Logic Flaw Detected**
> You lost correctness for speed. In a real contest, this would result in 0 points.

**Issue:**
You used `mp.count(-arr[i])` which only returns `0` or `1`. This fails when an element appears multiple times.

**Code Comparison:**

```diff
- count += mp.count(-arr[i]);
+ count += mp[-arr[i]];
```

**Conclusion:**
You think fast, but must slow down ~10% to validate logic.

---

### Q2: Reduce String

> [!TIP]
> **Strength Identified**
> You recognize patterns quickly and implement them cleanly.

- Used `stack` properly.
- Clean implementation.
- Complexity: $O(N)$.
- No overthinking.

---

### Q3: Allocate Books

> [!IMPORTANT]
> **Conceptual Weakness**
> Boundary precision needs tightening.

**Observation:**

- Correctly used binary search on the answer.
- Correctly built the `check()` function.
- Correctly used greedy partitioning.

**Issue:**
Binary search lower bound should be `max_element(pages)`, but you used `min_element(pages)`.

- *Why?* If the largest book has 100 pages, you cannot assign less than 100 pages to any student.
- *Result:* Your code still converges but wastes search space.

---

## Section 2: Coding Style Diagnosis

### 🌟 Strengths
- **Clean Structure & Templates:** Your code is well-organized and follows a solid baseline.
- **Velocity:** You implement solutions very fast, which is a massive advantage in timed contests.
- **Intuition:** Correct greedy thinking and comfort with Binary Search on answer.

### ⚠️ Weaknesses
- **Correctness Under Pressure:** Minor logic leaks (like Q1) occur when moving too fast.
- **Mathematical Precision:** Boundary conditions (like Q3) need to be tighter.
- **Edge Cases:** Missing a habit of manual validation for edge cases (e.g., frequencies > 1).

> [!NOTE]
> **Key Takeaway:** Typing speed is NOT your bottleneck. **Decision speed is your advantage**, but you must trade a tiny bit of it for **validation accuracy**.

---

## Section 3: HackWithInfy Prediction

| Problem Type | Predicted Outcome | Confidence |
| :--- | :--- | :--- |
| **Q1 (Arrays/Hashing)** | Full Solve | ⭐⭐⭐⭐⭐ |
| **Q2 (Stacks/Strings)** | Full Solve | ⭐⭐⭐⭐⭐ |
| **Q3 (Binary Search)** | Likely Full Solve | ⭐⭐⭐⭐ |

**Overall Capability:** **3/3 Problems Solved**

> [!IMPORTANT]
> **The Condition for Success:**
> You are fully capable of a perfect score, but only if you **eliminate small logical leaks** through proactive validation.
